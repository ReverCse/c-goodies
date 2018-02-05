#include "assertionTests.h"
#include "tests.h"

void runTests()
{
    printf("EQUALITY TESTS:\n");
    testAssertEquals();

    printf("\nGREATER-THAN TESTS:\n");
    testAssertGreaterThan();

    printf("\nGREATER-THAN OR EQUAL-TO TESTS:\n");
    testAssertGreaterThanEqualTo();

    printf("\nLESS-THAN TESTS:\n");
    testAssertLessThan();
}

int main(void)
{
    runTests();
    return 0;
}