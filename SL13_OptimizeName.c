#include <stdio.h>
#include <ctype.h>

int main(){
	int i=0;
	char S[30] = "vU VAn huY";
	printf("%s\n", S);
	while (S[i]!='0'){
		if (i==0 || S[i-1]==' ')
			S[i] = toupper(S[i]);
		else
			S[i] = tolower(S[i]);	
		i++;	
	}
	printf("%s", S);
	return 0;
}
