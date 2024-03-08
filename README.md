# Challenges
1. Pick an open source implementation of a language and check out the source code.
Try to find things related to parsing etc.

2. Just-in-time compilation tends to be the fastest way to implement dynamically 
typed languages, but not all of them use it. What reasons are there to *not* JIT?

3. Most Lisp implementations that compile to C also contain an interpreter that
lets them execute Lisp code on the fly. Why?

# Answers/Implementations
## 1: Checking out the implementation of CPython
Checked out the project. Gonna poke around.

## 2: Why not JIT?
JIT adds another layer of abstraction and extra implementation effort. This could
be a reason not to use it.

## 3: Why do Lips transpilers also ship with an interpreter
It can be useful to be able to immediately execute parts of your code for a language
like Lisp, which is commonly used for scripting, I assume.
