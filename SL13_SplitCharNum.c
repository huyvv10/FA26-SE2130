#include <stdio.h>
#include <ctype.h>

int main(){
	int i=0;
	char S[30] = "Con 3g2a 89g9ia";
	printf("%s\n", S);
	printf("OUTPUT\n");
	while (S[i]!='\0'){
		if (isalpha(S[i]) || isspace(S[i]))
			printf("%c", S[i]);
		i++;	
	}	
	
	return 0;
}
