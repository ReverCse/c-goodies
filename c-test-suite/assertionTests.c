#include "assertionTests.h"

int determineDatatype(char* datatype)
{
    if (strcmp(datatype, "int") == 0) {
        return INT;
    } else if (strcmp(datatype, "bool") == 0) {
        return BOOL;
    } else if (strcmp(datatype, "char") == 0) {
        return CHAR;
    } else if (strcmp(datatype, "double") == 0) {
        return DOUBLE;
    } else if (strcmp(datatype, "float") == 0) {
        return FLOAT;
    } else {
        return false;
    }
}

bool assertEquals(void* param1, void* param2, char* datatype)
{
    switch (determineDatatype(datatype)) {
        case INT:
            return *(int*)(param1) == *(int*)(param2);
        case BOOL:
            return *(bool*)(param1) == *(bool*)(param2);
        case CHAR:
            return *(char*)(param1) == *(char*)(param2);
        case DOUBLE:
            return *(double*)(param1) == *(double*)(param2);
        case FLOAT:
            return *(float*)(param1) == *(float*)(param2);
        default:
            return false;
    }
}

bool assertGreaterThan(void* param1, void* param2, char* datatype)
{
    switch (determineDatatype(datatype)) {
        case INT:
            return *(int*)(param2) > *(int*)(param1);
        case CHAR:
            return *(char*)(param2) > *(char*)(param1);
        case DOUBLE:
            return *(double*)(param2) > *(double*)(param1);
        case FLOAT:
            return *(float*)(param2) > *(float*)(param1);
        default:
            return false;
    }
}

bool assertGreaterThanEqualTo(void* param1, void* param2, char* datatype)
{
    switch (determineDatatype(datatype)) {
        case INT:
            return *(int*)(param2) >= *(int*)(param1);
        case CHAR:
            return *(char*)(param2) >= *(char*)(param1);
        case DOUBLE:
            return *(double*)(param2) >= *(double*)(param1);
        case FLOAT:
            return *(float*)(param2) >= *(float*)(param1);
        default:
            return false;
    }
}

bool assertLessThan(void* param1, void* param2, char* datatype)
{
    switch (determineDatatype(datatype)) {
        case INT:
            return *(int*)(param2) < *(int*)(param1);
        case CHAR:
            return *(char*)(param2) < *(char*)(param1);
        case DOUBLE:
            return *(double*)(param2) < *(double*)(param1);
        case FLOAT:
            return *(float*)(param2) < *(float*)(param1);
        default:
            return false;
    }
}