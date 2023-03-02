#include <iostream>
#include "funcs.h"

int main(){

  //Task A; is divisible
  std:: cout << "The divisibility of 100 and 25 is " << isDivisibleBy(100,25) << std:: endl;
  std:: cout << "The divisibility of 35 and 17 is " << isDivisibleBy(35,17) << std:: endl;
  
  std::cout << "\n------------------\n";
  
  //Task B; is prime
  std:: cout << "2 is " << isPrime(2) << std:: endl;
  std:: cout << "15 is " << isPrime(15) << std:: endl;
  std:: cout << "5 is " << isPrime(5) << std:: endl;
  std:: cout << "10 is " << isPrime(10) << std:: endl;

  std::cout << "\n------------------\n";

  //Task C; next prime
  std:: cout << "The next prime number after 14 is " << nextPrime(14) << std:: endl;
  std:: cout << "The next prime number after 17 is " << nextPrime(17) << std:: endl;

  std::cout << "\n------------------\n";
  
  //Task D; primes in range
  std:: cout << "The number of prime numbers between 1 and 5 is " << countPrimes(1,5) << std:: endl;
  std:: cout << "The number of prime numbers between 10 and 20 is " << countPrimes(10,20) << std:: endl;

  std::cout << "\n------------------\n";

  //Task E; is twin prime
  std:: cout << "17 is " << isTwinPrime(17) << std:: endl;
  std:: cout << "4 is " << isTwinPrime(4) << std:: endl;

  std::cout << "\n------------------\n";

  //Task F; next prime twin
  std:: cout << "The next prime twin number after 19 is " << nextTwinPrime(19) << std:: endl;
  std:: cout << "The next prime twin number after 7 is " << nextTwinPrime(7) << std:: endl;

  std::cout << "\n------------------\n";

  //Task G; largest twin prime in range
  std:: cout << "The largest twin prime between 1 and 5 is " << largestTwinPrime(1,5) << std:: endl;
  std:: cout << "The largest twin prime between 1 and 31 is " << largestTwinPrime(1,31) << std:: endl;
  std:: cout << "The largest twin prime between 14 and 16 is " << largestTwinPrime(14,16) << std:: endl;
  

  
}
