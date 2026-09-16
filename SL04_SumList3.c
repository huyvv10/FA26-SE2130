#include <stdio.h>

int main() {
	int i, n, S=0, S1=0, S2=0;
	scanf("%d", &n);

	for (i=0; i<=n; i++) {
		S+=i;	//S = S+i;
		printf("%d + ", i);
	}
	printf("\b\b= %d\n", S);

	for (i=1; i<=n; i+=2) {
		printf("%d + ", i);
		S1+=i;
	}
	printf("\b\b= %d\n", S1);

	for (i=0; i<=n; i+=2) {
		printf("%d + ", i);
		S2+=i;
	}
	printf("\b\b= %d\n", S2);


	return 0;
}
