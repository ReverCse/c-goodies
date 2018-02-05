#include "assertionTests.h"
#include "tests.h"

void runTests()
{
    printf("EQUALITY TESTS:\n");
    testAssertEquals();

    printf("\nGREATER-THAN TESTS:\n");
    testAssertGreaterThan();
}

int main(void)
{
    runTests();
    return 0;
}