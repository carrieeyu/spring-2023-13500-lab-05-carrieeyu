#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//Task A

TEST_CASE("Divisible numbers"){
  CHECK(isDivisibleBy(100,25) == true);  //1
  CHECK(isDivisibleBy(35,217) == false); //0
  }


//Task B
TEST_CASE("Prime numbers"){
  CHECK(isPrime(2) == true);
  CHECK(isPrime(15) == false);
  CHECK(isPrime(5) == true);
  CHECK(isPrime(10) == false);
}


//Task C
TEST_CASE("Next smallest prime numbers"){
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
}


//Task D
TEST_CASE("Number of primes within range"){
  CHECK(countPrimes(1,5) == 3);
  CHECK(countPrimes(10,20) == 4);
}


//Task E
TEST_CASE("Twin prime numbers"){
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(4) == false);
}


//Task F
TEST_CASE("Next smallest twin prime numbers"){
  CHECK(nextTwinPrime(19) == 23);
  CHECK(nextTwinPrime(7) == 11);
}


//Task G
TEST_CASE("Largest twin prime numbers"){
  CHECK(largestTwinPrime(1,5) == 5);
  CHECK(largestTwinPrime(1,31) == 31);
  CHECK(largestTwinPrime(14,16) == -1);
}
