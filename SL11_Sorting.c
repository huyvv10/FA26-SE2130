#include <stdio.h>
void selectionSortAsc(int a[], int n);
void selectionSortDesc(int a[], int n);
void bubbleSortAsc(int a[], int n);
void bubbleSortDesc(int a[], int n);
void display(int a[], int n);
int main(){
	int n=15;
	int a[]={5,2,6,4,8,9,5,2,3,6,1,7,5,8,9};
	display(a, n);	
//	printf("\n--- Selection sort Asc ---\n");
//	selectionSortAsc(a, n);
//	display(a, n);
//	printf("\n--- Selection sort Desc ---\n");
//	selectionSortDesc(a, n);
//	display(a, n);
	printf("\n--- Bubble sort Asc ---\n");
	bubbleSortAsc(a, n);
	display(a, n);
	printf("\n--- Bubble sort Desc ---\n");
	bubbleSortDesc(a, n);
	display(a, n);
	return 0;
}

//Sort in ascending order using Bubble sort algorithm
void bubbleSortAsc(int a[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] > a[j]){
				int tmp=a[j]; a[j]=a[j-1]; a[j-1]=tmp;
			}
}

//Sort in descending order using Bubble sort algorithm
void bubbleSortDesc(int a[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] < a[j]){
				int tmp=a[j]; a[j]=a[j-1]; a[j-1]=tmp;
			}
}

//Sort the array in ascending order
void selectionSortAsc(int a[], int n){
	int i, j, minId;
	for (i=0; i<n-1; i++){
		minId=i;
		for (j=i+1; j<n; j++)
			if (a[j] < a[minId]) minId=j;
		if (i!=minId){
			int tmp=a[i]; a[i]=a[minId]; a[minId]=tmp;
		}	
	}		
}

//Sort the array in descending order
void selectionSortDesc(int a[], int n){
	int i, j, maxId;
	for (i=0; i<n-1; i++){
		maxId=i;
		for (j=i+1; j<n; j++)
			if (a[j] > a[maxId]) maxId=j;
		if (i!=maxId){
			int tmp=a[i]; a[i]=a[maxId]; a[maxId]=tmp;
		}	
	}		
}




void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}