#include <stdio.h>

int main(){
	int n;
	printf("Nhap giai thuong cua ban: "); scanf("%d", &n);
	switch (n){
		case 1:
			printf("Ban dat giai nhat, thuong 1000000");
			break;
		case 2:
			printf("Ban dat giai nhi, thuong 500000");
			break;
		case 3:
			printf("Ban dat giai ba, thuong 100000");
			break;
		case 4:
			printf("Ban dat giai khuyen khich, thuong 10000");
			break;
		default:
			printf("Chuc ban may man lan sau.");
	}
	
	return 0;
}
