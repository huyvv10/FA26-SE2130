#include <stdio.h>

int main(){
	int n;
	char vC;
	float vF;
	double vD;
	
	printf("Input a character: "); scanf("%c", &vC);
	printf("Input a number: "); scanf("%d", &n);
	printf("Input a float number: "); scanf("%f", &vF);
	printf("Input a double number: "); scanf("%lf", &vD);
	
	printf("Your inputed character: %c", vC);
	printf("\nYour inputed number: %d", n);
	printf("\nYour inputed number: %.2f", vF);
	printf("\nYour inputed number: %.2lf", vD);

	return 0;
}
