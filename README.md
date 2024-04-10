# crafting-interpreters
Repo for all the code made while going through the Crafting Interpreters Book.

## Progress
- [X] Chapter 1: Introduction
    - [X] Challenge 1.1 Finding domain specific languages
    - [X] Challenge 1.2 Hello world in Java
    - [X] Challenge 1.3 Doubly linked list in C
- [X] Chapter 2: A Map of the Territory (stopped at 2.1.7)
    - [ ] Challenge 2.1 Inspecting the source code of CPython
    - [X] Challenge 2.2 Why not use JIT
    - [X] Challenge 2.3 Why Lisp comes with an interpreter
- [X] Chapter 3: The Lox Language
    - [X] Challenge 3.1 Writing a little lox program
    - [X] Challenge 3.2 Open questions about lox
    - [X] Challenge 3.3 What features are missing
- [X] Chapter 4: A Tree-Walking interpreter
    - [X] Challenge 4.1 Regular grammars
    - [X] Challenge 4.2 Effect of spaces in other languages
    - [X] Challenge 4.3 Reasons to not ignore comments
    - [X] Challenge 4.4 Adding support for multiline comments `/* ... */`
- [X] Chapter 5: Representing code
    - [X] Challenge 5.1 Unwinding EBNF
    - [ ] Challenge 5.2 Complementary pattern to visitor pattern in functional lang
    - [X] Challenge 5.3 RPN
- [ ] Chapter 6: Representing code
- [ ] ...

# Java version
Basic gradle project. Build jar with `./gradlew jar` and run with `java -jar build/libs/LoxLang.jar`.

# Challenges 06
## 6.1 Support for the `,`-Operator
In C, the comma operator is a binary operator which evaluates its first operand 
and then discards the result before it evaluates its second operand.

It is generally used when the first operand has a desirable side effect but its
result is not needed for the remaining code. We often see assignment done with
commas, but that is **not** the comma operator! For assignment it, it really is
just a separator.

```c
// this is just a separation
int a = 1, b = 5, c = 9;

```
```c
// this is the actual comma operator
// the first usage is still just separation
// the second usage assigns b to i
int a = 1, b = 2, c = 3;
int i = (a, b);
```

### Implementation
To implement this, we need can use the existing `COMMA` `Tokentype`, that we 
already have available. We need to implement parsing it correctly.
C implements the comma operator as having the lowest precedence, meaning it is
evaluated at the very end. Thus we will add it in as as a first step, even before
equality.

Our new grammar will look like this:
```
expression     → comma ;
comma          → equality ( "," equality )* ;
equality       → comparison ( ( "!=" | "==" ) comparison )* ;
comparison     → term ( ( ">" | ">=" | "<" | "<=" ) term )* ;
term           → factor ( ( "-" | "+" ) factor )* ;
factor         → unary ( ( "/" | "*" ) unary )* ;
unary          → ( "!" | "-" ) unary
               | primary ;
primary        → NUMBER | STRING | "true" | "false" | "nil"
               | "(" expression ")" ;
```
To implement this, we add the following code to `Parser.java`
```java
private Expr expression() {
  return comma();
}

private Expr comma() {
  Expr expr = equality();

  while (match(COMMA)) {
    Token operator = previous();
    Expr right = equality();
    expr = new Expr.Binary(expr, operator, right);
  }

  return expr;
}
```

It contains the method to parse the comma operation and we also changed
`expression` to first parse a `comma` operation, rather than an `equality`.

Compiling and running our code, we can see that it now parses `comma` operations
at the lowest precedence:
```
Going to REPL
> 1+2,2
(, (+ 1.0 2.0) 2.0)
```

**Still need to check if the associativity is actually correct here! Haven't done
that yet**
