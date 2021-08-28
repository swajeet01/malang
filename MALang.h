/**
 * 
 */

// Include Guard
#ifndef MLANG_H
#define MLANG_H 1


// Headers
#include <stdio.h> // For IO
#include <iso646.h> // For alternative operators


// Blocks

/**
 * Start definition of main function
 */
#define BEGIN int main(int argc, char* argv[]) {

/**
 * if statement
 */
#define IF(cond) if (cond) {

/**
 * else statement
 */
#define ELSE } else {

/**
 * else if statement
 */
#define ELIF(cond) } else if (cond) {

/**
 * Trivial for loop
 * defines an int variable i in scope
 */
#define REPEAT(times) for (int i = 0; i < times; ++i) {

/**
 * for loop with named variable
 */
#define REPEATN(times, name) for (int name = 0; name < times; ++name) {

/**
 * Advanced for loop
 * WARNING: Macro Pitfall! Use with caution! 
 */
#define FOR(init, cond, incr) for (init; cond; incr) {

/**
 * Trivial while loop
 */
#define WHILE(cond) while (cond) {

/**
 * Do part of Do-While loop
 */
#define DO(body) do { body }

/**
 * WHile part of Do-While loop
 */
#define WHL(cond) while (cond);

/**
 * Exit returning status from a function
 */
#define SEND(status) return status;

/**
 * Exit returning status from a function
 */
#define send(status) return status;

/**
 * Exit returning status from a function
 */
#define RET(status) return status;

/**
 * Define a function
 */
#define FNDEF(type, name) type name 

/**
 * Begin function body
 */
#define FNBEG {

/**
 * Define a function (short)
 */
#define FN(ret_type, name, params, body) \
    ret_type name params \
    { body }

/**
 * End any block
 */
#define END }


// Modules?

/**
 * WARNING: Not implemented
 */
#define import(header) 


// Function

/**
 * Call function name with params as arguments
 */
#define call_fn(name, params) name params;

/**
 * Call function name
 * WARNING: This must be followed by with(params)
 */
#define call(name) name

/**
 * complete preceding funtion call
 * WARNING: This must be preceded by call(name)
 */
#define with(params) params;

/**
 * Call function name with params as arguments
 * WARNING: DO NOT USE THIS
 */
#define alt_call_fn(name, params) name##params;


// Variables

/**
 * Define a variable and initialize
 */
#define var(type, name, val) type name = val;

/**
 * Define a variable (uninitialized)
 */
#define uvar(type, name) type name;

/**
 * Define a variable (uninitialized)
 * WARNING: Must be followed by init(value)
 */
#define decl(type, name) type name

/**
 * Initialize a variable
 * WARNING: Must be preceded by decl(type, name)
 */
#define init(value) = value;

/**
 * Array
 * WARNING: Not implemented
 */
#define array(type, name) type name[];

/**
 * Define and initalize an int
 */
#define sint(name, val) int name = val;

/**
 * Define and initalize a double
 */
#define sdouble(name, val) double name = val;

/**
 * Define and initalize a float
 */
#define sfloat(name, val) float name = val;

/**
 * Define and initalize a char
 */
#define schar(name, val) char name = val;


// Output

/**
 * Print a newline character to stdout
 */
#define newl() puts("");

/**
 * Print a string to stdout
 */
#define print(str) printf(str);

/**
 * Print an int to stdout
 */
#define print_int(value) printf("%d", value);

/**
 * Print a double or float to stdout
 */
#define print_floating(value) printf("%f", value);

/**
 * Print a char to stdout
 */
#define print_char(value) printf("%c", value);

/**
 * Print a double or float with precision to stdout
 */
#define print_pfloating(value, prec) printf("%." #prec "f", value);

/**
 * Print str to stdout followed by newline char
 */
#define println(str) puts(str);

/**
 * Print formatted string to stdout
 */
#define format(args...) printf(args);

// Input

/**
 * Read an int from stdin
 */
#define read_int(var) scanf("%d", &var);

/**
 * Read a double or float from stdin
 */
#define read_floating(var) scanf("%f", &var);

/**
 * Read a char from stdin
 */
#define read_double(var) scanf("%c", &var);


// Misc

#define end ;


#endif /* MALANG_H Include Gurad */