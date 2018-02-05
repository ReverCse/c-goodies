#include "assertionTests.h"

bool assertEquals(void* param1, void* param2, char* datatype)
{
    if (strcmp(datatype, "int") == 0) {
        return *(int*)(param1) == *(int*)(param2);
    } else if (strcmp(datatype, "bool") == 0) {
        return *(bool*)(param1) == *(bool*)(param2);
    } else if (strcmp(datatype, "char") == 0) {
        return *(char*)(param1) == *(char*)(param2);
    } else if (strcmp(datatype, "double") == 0) {
        return *(double*)(param1) == *(double*)(param2);
    } else if (strcmp(datatype, "float") == 0) {
        return *(float*)(param1) == *(float*)(param2);
    } else {
        return false;
    }
}

bool assertEqualsInt(int num1, int num2)
{
    return num1 == num2;
}
