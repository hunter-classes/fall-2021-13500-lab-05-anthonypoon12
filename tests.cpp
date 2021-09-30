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
TEST_CASE("nextPrime cases for 0, 1, and 2")
{
    CHECK(nextPrime(0)==2);
    CHECK(nextPrime(1)==2);
}
TEST_CASE("nextPrime cases for primes")
{
    CHECK(nextPrime(2)==3);
    CHECK(nextPrime(3)==5);
    CHECK(nextPrime(5)==7);
    CHECK(nextPrime(11)==13);
}
TEST_CASE("nextPrime normal cases")
{
    CHECK(nextPrime(21)==23);
    CHECK(nextPrime(26)==29);
    CHECK(nextPrime(4)==5);
TEST_CASE("nextPrime negative cases")
{
    CHECK(nextPrime(-1)==2);
    CHECK(nextPrime(=100)==2);
TEST_CASE("countPrime abonormal")
{
    CHECK(countPrime(0,0)==0);
    CHECK(countPrime(1,1)==0);
    CHECK(countPrime(2,2)==1);
TEST_CASE("countPrime normal cases")
{
    CHECK(countPrime(-100,3)==2);
    CHECK(countPrime(0,10)==4);
    CHECK(countPrime(2,3)==2);
}
