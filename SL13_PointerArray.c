#include <stdio.h>
#include <stdlib.h>
void intput(int *a, int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}
}

void display(int *a, int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}

int main(){
	int n;
	scanf("%d", &n);
//	int a[n];
//	int *a = (int *)malloc(n*sizeof(int));
	int *a = (int *)calloc(n,sizeof(int));
	intput(a, n);
	display(a, n);
	free(a);		//Giai phong bo nho
	return 0;
}
