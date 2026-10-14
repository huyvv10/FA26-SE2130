#include <stdio.h>

int main(){
	int n = 5;
	int *pI = &n;
	
	printf("Gia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi cua con tro pI = %x", &pI);
	printf("\nDia chi cua con tro pI tro den = %x", pI);
	
	*pI = 10;
	printf("\n\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi cua con tro pI = %x", &pI);
	printf("\nDia chi cua con tro pI tro den = %x", pI);	
	
	int m = 15;
	pI = &m;

	printf("\n\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\n\nGia tri cua m = %d", m);
	printf("\nDia chi cua m = %x", &m);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi cua con tro pI = %x", &pI);
	printf("\nDia chi cua con tro pI tro den = %x", pI);	
	
	printf("\nn + *pI = %d", n+*pI);		//25
	printf("\nm + *pI = %d", m+*pI);		//30
	
	int a[10]	// *a
	
	return 0;
}
