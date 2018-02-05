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

void testAssertGreaterThan()
{
    int param1 = 1;
    int param2 = 1;
    int param3 = 2;
    char char1 = 'a';
    char char2 = 'a';
    char char3 = 'b';
    double double1 = 1.1;
    double double2 = 1.1;
    double double3 = 1.2;
    float float1 = 2.1;
    float float2 = 2.1;
    float float3 = 2.2;

    bool returnVal = assertGreaterThan(&param1, &param3, "int");
    bool returnVal2 = assertGreaterThan(&param1, &param2, "int");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "INT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "INT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
    
    returnVal = assertGreaterThan(&char1, &char3, "char");
    returnVal2 = assertGreaterThan(&char1, &char2, "char");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "CHAR tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "CHAR tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertGreaterThan(&double1, &double3, "double");
    returnVal2 = assertGreaterThan(&double1, &double2, "double");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "DOUBLE tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "DOUBLE tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertGreaterThan(&float1, &float3, "float");
    returnVal2 = assertGreaterThan(&float1, &float2, "float");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "FLOAT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "FLOAT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
}

void testAssertGreaterThanEqualTo()
{
    int param1 = 1;
    int param2 = 0;
    int param3 = 2;
    char char1 = 'b';
    char char2 = 'a';
    char char3 = 'c';
    double double1 = 1.1;
    double double2 = 1.0;
    double double3 = 1.2;
    float float1 = 2.1;
    float float2 = 2.0;
    float float3 = 2.2;

    bool returnVal = assertGreaterThanEqualTo(&param1, &param3, "int");
    bool returnVal2 = assertGreaterThanEqualTo(&param1, &param2, "int");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "INT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "INT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
    
    returnVal = assertGreaterThanEqualTo(&char1, &char3, "char");
    returnVal2 = assertGreaterThanEqualTo(&char1, &char2, "char");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "CHAR tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "CHAR tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertGreaterThanEqualTo(&double1, &double3, "double");
    returnVal2 = assertGreaterThanEqualTo(&double1, &double2, "double");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "DOUBLE tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "DOUBLE tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertGreaterThanEqualTo(&float1, &float3, "float");
    returnVal2 = assertGreaterThanEqualTo(&float1, &float2, "float");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "FLOAT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "FLOAT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
}

void testAssertLessThan()
{
    int param1 = 2;
    int param2 = 2;
    int param3 = 1;
    char char1 = 'b';
    char char2 = 'b';
    char char3 = 'a';
    double double1 = 1.2;
    double double2 = 1.2;
    double double3 = 1.1;
    float float1 = 2.2;
    float float2 = 2.2;
    float float3 = 2.1;

    bool returnVal = assertLessThan(&param1, &param3, "int");
    bool returnVal2 = assertLessThan(&param1, &param2, "int");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "INT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "INT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
    
    returnVal = assertLessThan(&char1, &char3, "char");
    returnVal2 = assertLessThan(&char1, &char2, "char");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "CHAR tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "CHAR tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertLessThan(&double1, &double3, "double");
    returnVal2 = assertLessThan(&double1, &double2, "double");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "DOUBLE tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "DOUBLE tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertLessThan(&float1, &float3, "float");
    returnVal2 = assertLessThan(&float1, &float2, "float");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "FLOAT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "FLOAT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
}

void testAssertLessThanEqualTo()
{
    int param1 = 2;
    int param2 = 3;
    int param3 = 1;
    char char1 = 'b';
    char char2 = 'c';
    char char3 = 'a';
    double double1 = 1.2;
    double double2 = 1.3;
    double double3 = 1.1;
    float float1 = 2.2;
    float float2 = 2.3;
    float float3 = 2.1;

    bool returnVal = assertLessThanEqualTo(&param1, &param3, "int");
    bool returnVal2 = assertLessThanEqualTo(&param1, &param2, "int");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "INT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "INT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
    
    returnVal = assertLessThanEqualTo(&char1, &char3, "char");
    returnVal2 = assertLessThanEqualTo(&char1, &char2, "char");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "CHAR tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "CHAR tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertLessThanEqualTo(&double1, &double3, "double");
    returnVal2 = assertLessThanEqualTo(&double1, &double2, "double");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "DOUBLE tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "DOUBLE tests FAILED!" ANSI_COLOR_RESET "\n");
    }

    returnVal = assertLessThanEqualTo(&float1, &float3, "float");
    returnVal2 = assertLessThanEqualTo(&float1, &float2, "float");
    if (returnVal && !returnVal2) {
        printf(ANSI_COLOR_GREEN "FLOAT tests passed!" ANSI_COLOR_RESET "\n");
    } else {
        printf(ANSI_COLOR_RED "FLOAT tests FAILED!" ANSI_COLOR_RESET "\n");
    }
}