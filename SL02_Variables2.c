#include <stdio.h>

int main(){
	int n;
	char vC;
	float vF;
	double vD;
	
	printf("Input a number: "); scanf("%d", &n);
	printf("Your inputed number: %d", n);
	
	getchar();	//Clear buffer
//	fflush(stdin);	//Clear buffer
	
	printf("\nInput a character: "); scanf("%c", &vC);
	printf("Your inputed character: %c", vC);
	
	
	printf("\nInput a float number: "); scanf("%f", &vF);
	printf("Your inputed number: %.2f", vF);
	
	printf("\nInput a double number: "); scanf("%lf", &vD);
	printf("\nYour inputed number: %.2lf", vD);

	return 0;
}
