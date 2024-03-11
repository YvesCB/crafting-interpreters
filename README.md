# Challenges 03
1. Write some sample Lox programs and run them (you can use the implementations 
of Lox in my repository). Try to come up with edge case behavior I didn't specify 
here. Does it do what you expect? Why or why not?

2. This informal introduction leaves a lot unspecified. List several open questions 
you have about the language’s syntax and semantics. What do you think the answers 
should be?

3. Lox is a pretty tiny language. What features do you think it is missing that 
would make it annoying to use for real programs? (Aside from the standard library, 
of course.)

# Answers
## 1 Sample programs in Lox
Tried some small stuff.
```
class Breakfast {
    init(food) {
        this.food = food;
    }

    eat() {
        print "eating " + this.food;
    }
}

var bf = Breakfast("eggs");

bf.eat();
```

This will print `eating eggs` to the terminal.
I also tried to pass a function as a argument like so:
```
fun do_operation(num, op) {
    return op(num);
}

fun add_five(num) {
    return num + 5;
}

print do_operation(10, add_five);
```

Which just prints `15` as expected.

## 2 Open questions about the Lox language
Does Lox pass values by reference? Can you get the address of a var?

## 3 Missing features
We don't have any support of arrays.
