#include <stdio.h>
#include "PrimeLib.c"

int isPrime(int n);
void listTheFirstNPrimes(int n);
int sumPrimeToN(int);
void listPrimeToN(int n);
int sumTheFirstNPrimes(int n);

int main(){
	int n;
	scanf("%d", &n);
	if (isPrime(n)==1)				//Call function module
		printf("%d is a prime number",n);
	else	
		printf("%d is not a prime number", n);
	printf("\nThe first %d prime numbers: ",n);
	listTheFirstNPrimes(n);			//Call void module
	printf("\nThe total value of the first %d primes: %d", n, sumTheFirstNPrimes(n));
	printf("\nThe total value of the primes to %d: %d", n, sumPrimeToN(n));
	printf("\nThe primes from 2 to %d is: ", n);
	listPrimeToN(n);
	return 0;
}


