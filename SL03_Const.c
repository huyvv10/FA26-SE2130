#include <stdio.h>
#define PI 3.14159

int main(){
	const float pi = 3.14159;
	printf("Nhap ban kinh: ");
	float r;
	scanf("%f", &r);
	//If radius < 0 then radius is 1.
	r = r<0 ? 1 : r;	
	printf("Chu vi hinh tron la: %.2f", 2*pi*r);
	printf("\nDien tich hinh tron la: %.2f", PI*r*r);
	
	return 0;
}
