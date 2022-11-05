
#include "sigunit.h"

static int
test_addition(void)
{
    su_assert(5 == 3);
}

static int (*tests[])(void) = {test_addition};

int
main(void)
{
    su_run_all_tests(tests);
}
