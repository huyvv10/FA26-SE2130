#include <stdio.h>
#define MAX 10
void input2DArray(int a[][MAX], int r, int c);
void displayMainDiagonal(int a[][MAX], int r, int c);
void display2DArray(int a[][MAX], int r, int c);

int main(){
	int r, c;
	int a[MAX][MAX];
	printf("Input number of rows and columns: ");
	scanf("%d%d", &r, &c);
	input2DArray(a, r, c);
	display2DArray(a, r, c);
	printf("\n---Main diagonal---\n");
	displayMainDiagonal(a, r, c);
	printf("\n---Main diagonal square for prime elements---\n");
	displaySquarePrimeInMainDiagonal(a, r, c);
	return 0;
}

//Return 1 if n is a prime number; Return 0 otherwise.
int isPrime(int n){
	int i, rs=1;
	if (n<2) {
		rs = 0;
	} else {
		for (i=2; i*i<=n; i++)
			if (n%i==0){
				rs=0; break;
			}
	}
	return rs;	
}
//Display square the elements which are prime numbers in the main diagonal
void displaySquarePrimeInMainDiagonal(int a[][MAX], int r, int c){
	int i, min;
	min = r>c ? c : r;
	for (i=0; i<min; i++)
		if (isPrime(a[i][i])==1)
			printf("%d ", a[i][i]*a[i][i]);	
		else
			printf("%d ", a[i][i]);				
}

void calTotalEachRows(int a[][MAX], int r, int c){
	
}

void calTotalEachColumns(int a[][MAX], int r, int c){
	
}

void displaySubDiagonal(int a[][MAX], int r, int c){
	
}
void displayMainDiagonal(int a[][MAX], int r, int c){
	int i, min;
	min = r>c ? c : r;
	for (i=0; i<min; i++)
		printf("%d ", a[i][i]);
}

void input2DArray(int a[][MAX], int r, int c){
	int i, j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void display2DArray(int a[][MAX], int r, int c){
	int i, j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
			printf("%d ", a[i][j]);
		printf("\n");	
	}
}

