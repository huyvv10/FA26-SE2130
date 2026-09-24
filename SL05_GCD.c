#include <stdio.h>

int main(){
	int a, b, x, y;
	scanf("%d%d", &a, &b);
	x = a; y = b;
	while (a!=b){
		if (a>b)
			a=a-b;
		else
			b=b-a;	
	}
	printf("Great common devisor is: %d", a);
	int big, small;
	big = x > y ? x : y;
	small = x > y ? y : x;
	printf("\nLeast common multiply of %d and %d is: %d", x, y, big/a*small);

	return 0;
}
