#include <stdio.h>

//Return 1 if n is a prime number. Return 0 otherwise.
int isPrime(int n){
	int i, rs=1;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) {
			rs=0; break;
		}
	return rs;	
}

//Display the first n prime numbers.
void listTheFirstNPrimes(int n){
	int i=2, count=0;
	while (count!=n){
		if (isPrime(i)==1){
			count++;
			printf("%d ", i);
		}
		i++;	
	}
}
//Return the total value of primes from 2 to N.
int sumPrimeToN(int n){
	int i, S=0;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1)
			S+=i;
	return S;
}

//List primes from 2 to n
void listPrimeToN(int n){
	int i;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1)
			printf("%d ", i);		
}

//Return total value of the first n prime number
int sumTheFirstNPrimes(int n){
	int i=2, count=0, S=0;
	while (count!=n){
		if (isPrime(i)==1){
			count++;
			S+=i;	//S = S+i
		}
		i++;	
	}
	return S;	
}
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
