#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

CHECK(isDivisibleBy(10,5)==true);
CHECK(isDivisibleBy(10,0)==false);
CHECK(isDivisibleBy(10,50)==true);
CHECK(isDivisibleBy(1,5)==false);
CHECK(isDivisibleBy(0,5)==false);