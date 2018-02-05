#include "tests.h"

void testAssertEquals()
{
    int param1 = 1;
    int param2 = 1;
    int param3 = 2;
    bool bool1 = true;
    bool bool2 = false;
    char char1 = 'a';
    char char2 = 'a';
    char char3 = 'b';
    double double1 = 1.1;
    double double2 = 1.1;
    double double3 = 1.2;
    float float1 = 2.1;
    float float2 = 2.1;
    float float3 = 2.2;

    bool returnVal = assertEquals(&param1, &param2, "int");
    bool returnVal2 = assertEquals(&param1, &param3, "int");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "INT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "INT tests FAILED!" ANSI_COLOR_RESET "\n");
    }


    returnVal = assertEquals(&bool1, &bool1, "bool");
    returnVal2 = assertEquals(&bool1, &bool2, "bool");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "BOOL tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "BOOL tests FAILED!" ANSI_COLOR_RESET "\n");
    }
    
    returnVal = assertEquals(&char1, &char2, "char");
    returnVal2 = assertEquals(&char1, &char3, "char");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "CHAR tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "CHAR tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertEquals(&double1, &double2, "double");
    returnVal2 = assertEquals(&double1, &double3, "double");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "DOUBLE tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "DOUBLE tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertEquals(&float1, &float2, "float");
    returnVal2 = assertEquals(&float1, &float3, "float");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "FLOAT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "FLOAT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
}