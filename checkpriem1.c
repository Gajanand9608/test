// C++ program to check if a prime number 
// can be expressed as sum of 
// two Prime Numbers 
#include <stdio.h> 
#include<math.h>


// Function to check whether a number 
// is prime or not 
int isPrime(int n) 
{ 
	if (n <= 1) 
		return 0; 

	for (int i = 2; i <= sqrt(n); i++) { 
		if (n % i == 0) 
			return 1; 
	} 

	return 1; 
} 

// Function to check if a prime number 
// can be expressed as sum of 
// two Prime Numbers 
int isPossible(int N) 
{ 
	// if the number is prime, 
	// and number-2 is also prime 
	if (isPrime(N) && isPrime(N - 2)) 
		return 1; 
	else
		return 0; 
} 

// Driver code 
int main() 
{ 
	int n =24; 

	if (isPossible(n)) 
		printf("yes"); 
	else
		printf("no"); 

	return 0; 
} 
