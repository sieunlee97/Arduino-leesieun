#include <stdio.h>

void main() {
	int a, b;
	printf("입력(integer)==>"); 	//표준출력 Standard Output 함수
	scanf("%d", &a);			 //표준입력 Standard Input 함수
	
	printf("입력(정수형)==>");
	scanf("%d", &b);
	
	printf("\n a=%d, b=%d\n", a, b);
}