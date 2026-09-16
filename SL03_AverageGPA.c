#include <stdio.h>

int main(){
	float m, ph, ch, gpa;
	printf("Input your math grade: "); scanf("%f", &m);
	printf("Input your physics grade: "); scanf("%f", &ph);
	printf("Input your chemistry grade: "); scanf("%f", &ch);
	gpa = (m+ph+ch)/3;
	if (gpa>=5)
		printf("Your gpa = %.2f then Pass", gpa);
	else	
		printf("Your gpa = %.2f then Fail", gpa);
	
	return 0;
}
