
#include "sigunit.h"

static int
test_addition(void)
{
    su_assert(5 == 3, "5 equals 3");
}

static int
test_cluster_1(void)
{
    su_assert(1 == 2, "1 == 2");
}

static int
test_cluster_2(void)
{
    su_assert(2 == 3, "2 == 3");
}

static int
test_cluster(void)
{
    int (*tests[])(void) = {test_cluster_1, test_cluster_2};

    su_run_all_tests(tests);
}

static int (*tests[])(void) = {test_addition, test_cluster};

int
main(void)
{
    su_run_all_tests(tests);
}
