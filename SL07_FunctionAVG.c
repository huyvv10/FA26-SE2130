#include <stdio.h>
double avg(int x, int y, int z){
	double rs = (x+y+z)/3.0;
	return rs;	
}

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	double rs = avg(a,b,c);
	printf("The average of %d, %d and %d is: %.2lf", a, b, c, rs);
	return 0;
}
