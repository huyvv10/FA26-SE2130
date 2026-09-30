#include <stdio.h>

void inputArray(int a[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void displayArray(int a[], int n) {
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
//Display even elements within the array.
void displayArrayEven(int a[], int n) {
	int i;
	for (i=0; i<n; i++)
		if (a[i]%2==0)
			printf("%d ", a[i]);
	printf("\n");
}
//Display square of even elements within the array
void displaySquareEven(int a[], int n) {
	int i;
	for (i=0; i<n; i++) {
		if (a[i]%2==0)
			printf("%d ", a[i]*a[i]);
		else	
			printf("%d ", a[i]);
	}
	printf("\n");
}

void displayReverse(int a[], int n) {
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ", a[i]);
	printf("\n");
}
int main() {
	int n;
	scanf("%d", &n);
	//Case 1
	int arr1[] = {6,2,7,9,4,3,5,8};
	displayArray(arr1, n);
	//Case 2
	int arr2[n];
	inputArray(arr2, n);
	displayArray(arr2, n);
	displayReverse(arr2, n);
	printf("Even numbers\n");
	displayArrayEven(arr2, n);
	printf("Display square of even elements within the array\n");
	displaySquareEven(arr2, n);
	return 0;
}
