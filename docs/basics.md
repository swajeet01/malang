# MALang basics

## The MALang file
The `MALang.h` file is a C header file which you can include in any C source file
and use MALang.

## Understanding Hello World!
Our Hello World! from Getting Started
```C
#include <MALang.h>

BEGIN
    println ("Hello World")
    send (0)
END
```
The first line is the `include` directive which brings all macro definitions
in the `MALang.h` file to current file.

The Next line provides entry point to
our program, you know that every C program start from the `main` function.
In MALang the program starts from `BEGIN` keyword.

The `BEGIN` keyword start a block. Every block must be closed with the `END`
keyword, In this case its also the end of the program.

`println` is an _action_, which is a macro definition in `MALang.h`, it prints
a string followed by a newline character.

We must return an exit status at the end of the program which is done by `send`
_action_, it takes an integer as parameter.

## Let's `BEGIN`
Every C program must contain a `main` function which is the entry point of the
program, in MALang we use `BEGIN` keyword to provide the same i.e. the program
exucution begins from `BEGIN` keyword.

It starts a block which must be closed with `END` keyword, that block contains
two variables `argc` and `argv` as in C. At the end of the `BEGIN` block must
there must be a call to `send` action with an integer value which will be the
return status of our program.

## Actions?
_Actions_ are function like macros defined in `MALang.h`, I call them _action_ because
they are not real functions and calling them function like marcos won't be fun.

## Variables
Variables can be defined in few diffrent ways-
- ### Using specific type variable declaration.

    Specific actions for defining few C built-in types.
    ```C
    sint (foo, 10) // defines an int variable foo with value 10
    sdouble (bar, 10.0) // defines a double variable bar with value 10.0
    ```
    few more such actions are available.
- ### `var` and `uvar` actions

    `var` action can define and intialize variable of any type other than arrays or structs
    ```C
    var (int, foo, 10) // defines an int variable foo with value 10
    var (double, bar, 10.0) // defines a double variable bar with value 10.0
    ```
    When using `var` one must provide an inital value to be used in initializer.

    `uvar` is like `var` but doesn't require an inital value, it leaves the variable
    uninitialized.
    ```C
    uvar (int, foo) // defines an uninitalized int variable foo
    uvar (double, bar) // defines a uninitalized double variable bar
    ```
- ### Using `decl` and `init`

    Using `decl` defines a variable but does not ends the statement, you can
    either end the statement with `end` keyword or use `init` action to intialize
    the defined variable
    ```C
    decl (char, nl) init ('\n') // defines a char variable initialized with value '\n'
    decl (char, ud) end // defines an uninitialized char variable 
    ```

## Selection statements (`IF/ELIF/ELSE`)
MALang has `IF/ELIF/ELSE` statements and they are pretty much what they are in other languages.
```C
#include <MALang.h>

BEGIN

    IF (1 < 10 and 5 > 0)
        println("Everything is fine")
        println("Is it?")
    END

END
```
The `IF` keyword starts a block, any variable defined within this block will have
the scope of that block only, this block must be closed with an `END` keyword.

An `IF` statement can be followed by an `ELSE` statement, it closes the block of
previous `IF` statement, it also starts a new block which must be closed with `END`.

```C
#include <MALang.h>

BEGIN

    IF (1 < 10 and 5 > 0)
        println("Everything is fine")
        println("Is it?")
    ELSE
        decl (int, chaos_lvl) init (10)
        format("chaos level %d\n", chaos_lvl)
    END

END
```
or by an `ELIF` statement
```C
#include <MALang.h>

BEGIN

    IF (1 < 10 and 5 > 0)
        println("Everything is fine")
        println("Is it?")
    ELIF (10 == 10 and 0 == 1)
        decl (int, chaos_lvl) init (5)
        println("chaos level %d\n", chaos_lvl)
    ELSE
        println("I must be dreaming")
    END

END
```

## Iteration (`REPEAT/REPEATN/WHILE/FOR/DO-WHILE`)
You must be familiar with `WHILE/FOR/DO-WHILE` if you come from another language,
`REPEAT` is nothing but a trivial `for` loop, it defines a variable `i` and
increments it by 1, `REPEATN` lets you name the variable used in `REPEAT`.
```C
#include <MALang.h>

BEGIN

    println("Greet me 10 times")
    REPEAT (10)
        puts ("hello") end
    END

END
```
`REPEAT` defines an int variable `i` inside its block, it's upto you to use or not.
If you want the variable to be names something other than `i` use `REPEATN`.
```C
#include <MALang.h>

BEGIN

    REPEATN (3, i)
        REPEATN (3, j)
            format ("row: %d column: %d\n", i, j)
        END
    END

END
```
`WHILE` loop is trivial.
```C
#include <MALang.h>

BEGIN

    sint (i, 0)
    WHILE (i < 10 and i * 0 == 0)
        println ("good")
        i++ end
    END

END
```
And so is `DO-WHILE`.
```C
#include <MALang.h>

BEGIN

    DO (
        println ("hello")
    ) WHL (1 > 10)

END
```
**Be careful here**, if the `DO` body has any comma, it will cause a Macro Pitfall, alternative `DO-WHILE` will be added soon.

At last the `FOR` loop. DO NOT USE THIS. better alternative is on the way.
```C
#include <MALang.h>

BEGIN

    FOR (int i = 0, i < 2, ++i)
        format ("10 * %d = %d\n", i, 10 * i)
    END

END
```
## Functions
### Function definitions
There are two ways in which you can define functions

- Short definition
    
    A shorthand function definition statement
    ```C
    #include <MALang.h>

    FN (int, foo, (int p1, float p2),
        format ("\n%d %f\n", p1, p2)
        send (0)
    )

    BEGIN
    END
    ```
    The `FN` keyword is used to define functions the parameters are in order-
    return type, function name, parameter list warpped in `()`, function body.
    
    This method is useful for defining short functions, **Be careful** if
    there are any commas in the function body it will cause a Macro Pitfall.
    ```C
    #include <MALang.h>

    FN (int, foo, (int p1, float p2),
        format ("%d %f", p1, p2)
        int i = 0, j = 10 end // error
        send (0)
    )

    BEGIN
    END
    ```
- Normal definition

    This type of definition is safe from the Macro Pitfall introduced in
    previous type of definition.

    ```C
    #include <MALang.h>

    FNDEF (int, bar) (int p1, float p2) FNBEG
        format ("%d %f", p1, p2)
        int i = 0, j = 1 end // okay
        send (0)
    END

    BEGIN
    END
    ```
    This definition starts with `FNDEF` keyword instead of `FN` keyword,
    it takes two parameters, return type and name of the function.
    It is then followed by parameter list of function wrapped in `()`
    and keyword `FNBEG` which starts the body of the function. This body is a new block and must be closed with the `END` keyword.
### Function taking no parameters
Functions taking no parameters can be defined by using `(void)` as the
the parameter list arguments to the function definition keywords.
```C
#include <MALang.h>

// void foobar()
FN (void, foobar, (void),
    println ("void is fun")
)

BEGIN
END
```
### Function invocation
Function defined with `FN` or `FNDEF` are normal C funtions and can
be invoked by diffrent methods
- Using `call_fn`

    Any function can be invoked using `call_fn`, it takes name and
    arguments wrapped in `()`.
    ```C
    #include <MALang.h>

    FN (void, foobar, (void),
        println ("void is fun")
    )

    FNDEF (int, bar) (int p1, float p2) FNBEG
        format ("%d %f", p1, p2)
        int i = 0, j = 1 end // okay
        send (0)
    END

    BEGIN
        call_fn (foobar, ())
        call_fn (bar, (10, 10.0))
    END
    ```
- Using `call` and `with`

    Another method of invoking any function is to use `call` and `with`.

    `call` takes a function and invokes it with the `()` wrapped
    arguments provide in `with`
    ```C
    #include <MALang.h>

    FN (void, foobar, (void),
        println ("void is fun")
    )

    FNDEF (int, bar) (int p1, float p2) FNBEG
        format ("%d %f", p1, p2)
        int i = 0, j = 1 end
        send (0)
    END

    BEGIN
        call (foobar) with (())
        call (bar) with ((10, 10.0))
    END
    ```

# In progress