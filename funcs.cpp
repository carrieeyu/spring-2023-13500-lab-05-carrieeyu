#include <iostream>
#include "funcs.h"

//Task A
//If n is divisible by d, the function should return true, otherwise return false.
bool isDivisibleBy(int n, int d){
  
  if ((n%d) == 0){ //checking for divisibility
    return true; 
    }
  return false; 
  
}


//Task B
//The function should return true if n is a prime, otherwise return false.
bool isPrime(int n){

  if(n < 2){ //if n is 0 or 1, it's not a prime number
    return false; 
  }

  for(int i = 2; i < n; i++){ 
    if(isDivisibleBy(n, i) == true){ 
      return false; //is not prime
    }
  }
  return true; //is prime
  
}

//Task C
//Returns the smallest prime greater than n
int nextPrime(int n){

  int nextSmallPrime = n+1; 
  bool notPrime = false;

  while(isPrime(nextSmallPrime) == notPrime){ //if n is not prime, then the loop continues until a prime number is reached
    nextSmallPrime ++;
  }
  return nextSmallPrime; 
  
}

//Task D
//Returns the number of prime numbers in the interval a ≤ x ≤ b. Change the main function to test the new code

int countPrimes(int a, int b){

  int count = 0;

  for(int i = a; i <= b; i++){ //loop starts at a and ends at b(inclusive)
    if(isPrime(i) ==  true){ //when a prime number is found within the range of a to b, that instance is stored in count
      count ++;
    }
  }
  return count;

}

//Task E
//A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
//For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
//Determines whether or not its argument is a twin prime

bool isTwinPrime(int n){

  for(int i = 0; i < n; i++){
    if(isPrime(n) && (isPrime(i-2) || (isPrime(i+2)))){ //if n is prime AND if (n-2) or (n+2) is also prime
      return true;
    }
  }
  return false;
  
}


//Task F
//returns the smallest twin prime greater than n
int nextTwinPrime(int n){
  int nextSmallPrimeTwin = n+1;
  bool notPrimeTwin = false;

  while(isTwinPrime(nextSmallPrimeTwin) == notPrimeTwin){
    nextSmallPrimeTwin++;
  }
  return nextSmallPrimeTwin;
  
}


//Task G
//Returns the largest twin prime in the range a ≤ N ≤ b
int largestTwinPrime(int a, int b){

  int max;

  for(int i = a; i <= b; i++){ //start from a and end at b(inclusive)
    if(isTwinPrime(i)){ //if i is twin prime within the given range, then it gets initialized as the max twin prime until the end of the loop
      max = i;
    }
    else{
      max = -1; //if i is not twin prime, then max gets initialized as -1
    }
  }
  return max;
  
}

