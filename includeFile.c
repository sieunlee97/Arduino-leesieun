#include <stdio.h>
#include "factorial.h" //5!=5*4*3*2*1

void main() {
	int x;
	printf("팩토리얼을 구할 숫자 입력 : ");
	scanf("%d", &x);
	printf("%d! = %d\n", x, factorial(x));
	getchar(); //입력 후 엔터키를 공백으로 처리
}