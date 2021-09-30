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
TEST_CASE("isPrime cases for 0, 1, and 2")
{
    CHECK(isPrime(0)==false);
    CHECK(isPrime(1)==false);
    CHECK(isPrime(2)==true);
}
TEST_CASE("isPrime normal cases")
{
    CHECK(isPrime(3)==false);
    CHECK(isPrime(4)==false);
    CHECK(isPrime(5)==true);
    CHECK(isPrime(121)==true);
    CHECK(isPrime(97)==true);
}