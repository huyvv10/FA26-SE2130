#include <stdio.h>

void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}
}

void display(int a[], int n){
	int i;
	for (i=0; i<n; i++) 
		printf("%d ", a[i]);
	printf("\n");		
}
//Return the maximum value in the array
int getMax(int a[], int n){
	int i, max;
	max=a[0];
	for (i=1; i<n; i++)
		if (a[i] > max) max = a[i];
	return max;	
}
//Return the minimum value in the array
int getMin(int a[], int n){
	int i, min;
	min=a[0];
	for (i=1; i<n; i++)
		if (a[i] < min) min = a[i];
	return min;	
}

//Return 1 if n is a prime number. Return 0 otherwsise
int isPrime(int n){
	if (n<2) return 0;
	int i;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
}

//Count number of primes within the array
int countPrime(int a[], int n){
	int i, count=0;
	for (i=0; i<n; i++)
		if (isPrime(a[i])==1) count++;
	return count;	
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArray(arr, n);
	display(arr, n);
	printf("\nThe maximum value in the array: %d", getMax(arr,n));
	printf("\nThe minimum value in the array: %d", getMin(arr,n));
	printf("\nThe number of primes: %d", countPrime(arr,n));
	
	return 0;
}
