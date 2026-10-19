#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, n = 10;
	srand(time(NULL));	//gen another seed
	for (i=0; i<n; i++)
		printf("%d ", rand());
	return 0;
}
