// Include Guard
#ifndef MLANG_BLOCKS_H
#define MLANG_BLOCKS_H 1

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
#define FOR_D(init, cond, incr) for (init; cond; incr) {

/**
 * New advanced for loop
 */
#define FOR for

/**
 * Begin block of for
 */
#define FORBEG {

/**
 * Trivial while loop
 */
#define WHILE(cond) while (cond) {

/**
 * Do part of Do-While loop
 * WARNING: Marco Pitlfall
 */
#define DO(body) do { body }

/**
 * While part of Do-While loop
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
 * WARNING: Must be followed by FNBEG
 */
#define FNDEF(type, name) type name 

/**
 * Begin function body
 * WARNING: Must be preceded by FNDEF(type, name)
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

#endif /* MALANG_BLOCKS_H Include Gurad */