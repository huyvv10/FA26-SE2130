#include <stdio.h>

int main(){
	int n, S;
	scanf("%d", &n);
	if (n<=50)
		S = n*1984;
	else if (n<=100)
		S = 50*1984 + (n-50)*2050;	
	else if (n<=200)
		S = 50*1984 + 50*2050 + (n-100)*2380;	
	else if (n<=300)
		S = 50*1984 + 50*2050 + 100*2380 + (n-200)*2998;	
	else if (n<=400)
		S = 50*1984 + 50*2050 + 100*2380 + 100*2998 + (n-300)*3350;
	else		
		S = 50*1984 + 50*2050 + 100*2380 + 100*2998 + 100*3350 + (n-400)*3460;
	printf("Total electricity cost for %d Kw is %.2f vnd", n, S*1.1);
	
	return 0;
}
