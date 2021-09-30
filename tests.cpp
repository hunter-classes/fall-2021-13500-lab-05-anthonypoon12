#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy normal cases")
{
    CHECK(isDivisibleBy(10,5)==true);
    CHECK(isDivisibleBy(1,5)==false);
    CHECK(isDivisibleBy(10,50)==true);
}
TEST_CASE("isDivisibleBy cases with 0")
{
    CHECK(isDivisibleBy(10,0)==false);
    CHECK(isDivisibleBy(0,5)==false);
}  