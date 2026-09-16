#include <stdio.h>

int main() {
	float m, ph, ch, gpa;
	printf("Input your math grade: ");
	scanf("%f", &m);
	printf("Input your physics grade: ");
	scanf("%f", &ph);
	printf("Input your chemistry grade: ");
	scanf("%f", &ch);
	gpa = (m+ph+ch)/3;
	if (gpa>=9)
		printf("Your gpa is %.2f. You are excellence.", gpa);
	else if (gpa>=8)
		printf("Your gpa is %.2f. You are good.", gpa);
	else if (gpa>=7)
		printf("Your gpa is %.2f. You are well.", gpa);
	else if (gpa>=5)
		printf("Your gpa is %.2f. You are fair.", gpa);
	else
		printf("Your gpa is %.2f. You are poor.", gpa);
	return 0;
}
