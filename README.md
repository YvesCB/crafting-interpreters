# crafting-interpreters
Repo for all the code made while going through the Crafting Interpreters Book.

## Progress
### Intro
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

### A Tree-Walking interpreter
- [X] Chapter 4: A Tree-Walking interpreter
    - [X] Challenge 4.1 Regular grammars
    - [X] Challenge 4.2 Effect of spaces in other languages
    - [X] Challenge 4.3 Reasons to not ignore comments
    - [X] Challenge 4.4 Adding support for multiline comments `/* ... */`
- [X] Chapter 5: Representing code
    - [X] Challenge 5.1 Unwinding EBNF
    - [ ] Challenge 5.2 Complementary pattern to visitor pattern in functional lang
    - [X] Challenge 5.3 RPN
- [X] Chapter 6: Representing code
    - [X] Challenge 6.1 Adding support for the comma operator
    - [ ] Challenge 6.2 Adding support for "ternary" operator `?:`
    - [ ] Challenge 6.3 Error production s for each binary operation without left-hand operand
- [X] Chapter 7: Evaluating Expressions
    - [ ] Challenge 7.1 Allowing comparison on types other than numbers
    - [ ] Challenge 7.2 Define + such that if either operand is a string, the other is converted to string
    - [ ] Challenge 7.3 Implement checking for divide by zero
- [X] Chapter 8: Statements and State
    - [X] Challenge 8.1 REPL should evaluate and print expressions right away
    - [X] Challenge 8.2 Make evaluating an uninitialized variable an runtime error
    - [X] Challenge 8.3 Declaration with inner usage of variable
- [X] Chapter 9: Control Flow
    - [/] Challenge 9.1 Implementing control flow with first-class functions and dynamic dispatch
    - [/] Challenge 9.2 Same for looping
    - [/] Challenge 9.3 Adding support for Break
- [X] Chapter 10: Functions
- [X] Chapter 11: Resolve Bindings
- [X] Chapter 12: Classes
- [X] Chapter 13: Inheritance

### A Bytecode Virtual Machine
- [X] Chapter 14: Chunks of bytecode
- [X] Chapter 15: A virtual machine

# Java version
Written with Java 21 and compiled and packaged with maven.

# C version
Compiling with gcc and the C11 standard.
