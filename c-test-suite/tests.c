#include "tests.h"

void testAssertEquals()
{
    int param1 = 1;
    int param2 = 1;
    int param3 = 2;

    bool returnVal = assertEquals(&param1, &param2, "int");
    bool returnVal2 = assertEquals(&param1, &param3, "int");

    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "Tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "Tests FAILED!" ANSI_COLOR_RESET "\n");
    }
}