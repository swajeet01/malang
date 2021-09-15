// Include Guard
#ifndef MLANG_VARS_FUNC_H
#define MLANG_VARS_FUNC_H 1

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
 * Define another variable in a definition chain (uninitialized)
 * HINT: May be followed by initw(value) or init(value)
 */
#define also(name) , name

/**
 * Initialize the variable in a definition chain and keep the chain
 * HINT: May be followed by also(value)
 */
#define initw(val) = val

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

#endif /* MALANG_VARS_H Include Gurad */