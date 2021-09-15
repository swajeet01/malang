// Include Guard
#ifndef MLANG_HLIO_FUNC_H
#define MLANG_HLIO_FUNC_H 1

// HLIO

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
 * Print an int followed by a newline to stdout
 */
#define printl_int(value) printf("%d\n", value);

/**
 * Print a double or float to stdout
 */
#define print_floating(value) printf("%f", value);

/**
 * Print a double or float followed by a newline to stdout
 */
#define printl_floating(value) printf("%f\n", value);

/**
 * Print a char to stdout
 */
#define print_char(value) printf("%c", value);

/**
 * Print a char followed by a newline to stdout
 */
#define printl_char(value) printf("%c\n", value);

/**
 * Print a double or float with precision to stdout
 */
#define print_pfloating(value, prec) printf("%." #prec "f", value);

/**
 * Print a double or float with precision followed by a newline to stdout
 */
#define printl_pfloating(value, prec) printf("%." #prec "f", value);

/**
 * Print str to stdout followed by newline char
 */
#define println(str) puts(str);

/**
 * Print formatted string to stdout
 */
#define formatp(args...) printf(args);

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

/**
 * Read formatted input to stdout
 * WARNING: Requires & operator
 */
#define formatr(args...) scanf(args);

#endif /* MALANG_HLIO_H Include Gurad */