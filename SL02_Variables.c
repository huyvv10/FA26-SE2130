#include <stdio.h>

int main(){
	
	char vC = 'F';
	int n = 8;
	float vF = 8.5f;
	double vD = 9.8;
	
	printf("\a");

	printf("Character: %c", vC);
	printf("\nNumber : %d", n);
	printf("\nFloat : %f", vF);
	printf("\nFloat : %.1f", vF);
	printf("\nDouble : %lf", vD);
	printf("\nDouble : %.2lf", vD);

	printf("\n\nChar : %c \t Number %d\nFloat %.2f \t Double %.2lf", vC, n, vF, vD);
	return 0;
}
