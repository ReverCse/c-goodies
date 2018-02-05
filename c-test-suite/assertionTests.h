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

/**
 * Checks equality between two primitive typed variables
 * (int, bool, char, double, float)
 * 
 * @param void* param1
 * @param void* param2
 * @param char* datatype
 * 
 * @returns boolean
 * 
 */
bool assertEquals(void* param1, void* param2, char* datatype);