#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* Output Color Definitions */
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define INT 1
#define BOOL 2
#define CHAR 3
#define DOUBLE 4
#define FLOAT 5

/**
 * Determines the datatype
 * 
 * @param char* datatype
 * 
 * @returns int
 * 
 */
int determineDatatype(char* datatype);

/**
 * Checks equality between two primitive typed variables
 * (int, bool, char, double, float)
 * 
 * @param void* param1
 * @param void* param2
 * @param char* datatype
 * 
 * @returns bool
 * 
 */
bool assertEquals(void* param1, void* param2, char* datatype);

/**
 * Checks whether param2 is greater than param1
 * (int, bool, char, double, float)
 * 
 * @param void* param1
 * @param void* param2
 * @param char* datatype
 * 
 * @returns bool
 * 
 */
bool assertGreaterThan(void* param1, void* param2, char* datatype);