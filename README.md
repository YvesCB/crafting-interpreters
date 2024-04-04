# crafting-interpreters
Repo for all the code made while going through the Crafting Interpreters Book.

## Progress
- [X] Chapter 1: Introduction
    - [X] Challange 1.1 Finding domain specific languages
    - [X] Challange 1.2 Hello world in Java
    - [X] Challange 1.3 Doubly linked list in C
- [X] Chapter 2: A Map of the Territory (stopped at 2.1.7)
    - [ ] Challange 2.1 Inspecting the source code of CPython
    - [X] Challange 2.2 Why not use JIT
    - [X] Challange 2.3 Why Lisp comes with an interpreter
- [X] Chapter 3: The Lox Language
    - [X] Challange 3.1 Writing a little lox program
    - [X] Challange 3.2 Open questions about lox
    - [X] Challange 3.3 What features are missing
- [ ] Chapter 4: A Tree-Walking interpreter
    - [ ] Challange 4.1 
    - [ ] Challange 4.2 
    - [ ] Challange 4.3 
- [ ] ...

# Java version
Basic gradle project. Build jar with `./gradlew jar` and run with `java -jar build/libs/LoxLang.jar`.

# Challenges 04
## 01 Regular Grammars
### The theory
In theoretical computer science and formal language theory, a regular grammar is 
a grammar that is right-regular or left-regular. While their exact definition 
varies from textbook to textbook, they all require that

* all production rules have at most one non-terminal symbol.
* that symbol is either always at the end or always at the start of the rule's 
right-hand side.

Every regular grammar describes a regular language.
Source: [Regular Grammars Wikipedia](https://en.wikipedia.org/wiki/Regular_grammar) 

### Why are Python's and Haskell's grammars not regular?
Python and Haskell both have rules for binary expressions of the form

$$
\begin{align*}
    Expr \to & Expr Op Expr
\end{align*}
$$

where *Expr* is any valid expression and *Op* is a binary operator.

This type of rule uses more than one non-terminal and as such is non-regular.

## 02 White space
I actually can't find the info I'm looking for to answer question 2.

## 03 Comments and whitespace
The reason to not discard comments could be that they might contain types like
in jsdoc or lua.

We might also want to read the comments and pars them as docstrings that we might
want to use later during runtime.

## 04 Adding support for comment blocks
Will be added to `./java/LoxLang/src/main/java/com/craftinginterpreters/lox/`
