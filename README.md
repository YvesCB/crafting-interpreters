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

# Challenges 05
## 5.1 EBNF
We expand the EBNF 
```EBNF
expr -> expr ( "(" ( expr ( "," expr )* )? ")" | "." IDENTIFIER )+ 
    | IDENTIFIER
    | NUMBER
```

First we remove all the `|` to get:
```EBNF
expr -> expr ( "(" ( expr ( "," expr )* ) ")" | "." IDENTIFIER )+
expr -> expr ( "(" ")" | "." IDENTIFIER )+
expr -> IDENTIFIER
expr -> NUMBER
```

Then we remove `*`
```EBNF
expr -> expr inner
expr -> IDENTIFIER
expr -> NUMBER

inner ->  inner_bracket inner
inner ->  "." IDENTFIER inner
inner ->  inner_bracket
inner ->  "." IDENTFIER

inner_bracket -> "(" expr inner_comma ")" inner_bracket
inner_bracket -> "(" expr inner_comma ")"

inner_comma -> "," expr inner_comma
inner_comma -> "," expr
inner_comma -> ""
```

This grammar can produce strings like 
* 10.ident(other_ident,9(another))

Any combination of identifiers or numbers, separated by a comma or a period and 
inner expressions in brackets.

## 5.2 
I will skip this since I don't know any functional languages well enough.

## 5.3
Implementation in the java code
