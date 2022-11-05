
## sigunit

A simple, single-file, header-only library for C unit tests.

## Installation

The library can be download directly by downloading `sigunit.h` as seen below:
```shell
curl https://raw.githubusercontent.com/SigJig/sigunit/main/sigunit.h -o sigunit.h
```

## Usage

The library is very simple to use, as can be seen below:

```c

#include "sigunit.h"

static int
test_eq(void)
{
    su_assert(3 == 3);
}

static int
test_neq(void)
{
    su_assert(5 == 3);
}

static int (*tests[])(void) = {test_eq, test_neq};

int
main(void)
{
    su_run_all_tests(tests);
}

```