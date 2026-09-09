#include <stdio.h>

int main(){
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	printf("Sum: %d + %d = %d", a, b, a+b);
	printf("\nSub: %d - %d = %d", a, b, a-b);
	printf("\nProduct: %d * %d = %d", a, b, a*b);
	printf("\nQuotien: %d / %d = %d", a, b, a/b);
	return 0;
}
