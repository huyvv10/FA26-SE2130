#include <stdio.h>

void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}
void searching(int a[], int n, int x){
	int i, flag=0;
	for (i=0; i<n; i++)
		if (a[i]==x){
			flag=1; break;
		}
	if (flag==1)
		printf("%d is already existing in the array.", x);
	else		
		printf("Find not found %d in the array", x);
}

//Return the position first found x in the array
//Return -1 in case find not found
int getFirstPos(int a[], int n, int x){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==x){
			pos=i; break;
		}	
	return pos;	
}
int main(){
	int n=16;
	int a[]={2,4,5,6,9,1,8,6,3,2,4,8,7,5,9,6};
	display(a,n);
	int x, pos;
	printf("Input searching number: "); scanf("%d", &x);
	searching(a, n, x);
	pos = getFirstPos(a, n, x);
	if (pos!=-1)
		printf("\nThe position first found %d is %d", x, pos);
	else
		printf("\nFind not found %d in the array", x);	
	return 0;
}
