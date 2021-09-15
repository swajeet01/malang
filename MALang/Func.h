// Include Guard
#ifndef MLANG_FUNC_H
#define MLANG_FUNC_H 1


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
#define with(params...) (params);

/**
 * Call function name with params as arguments
 * WARNING: DO NOT USE THIS
 */
#define alt_call_fn(name, params) name##params;

#endif /* MALANG_FUNC_H Include Gurad */