#include <stdio.h>

int main(){
	float gpa;
	printf("Input your gpa: ");
	scanf("%f", &gpa);
	if (gpa>=5)
		printf("Pass");
	else	
		printf("Fail");
	return 0;
}
