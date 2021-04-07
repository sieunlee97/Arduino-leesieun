#include <stdio.h> //라이브러리 임포트
int multi(int x, int y); //함수 명세 표시= 스프링의 인터페이스와 같은 역할

void main() {
	int a, b, c; // 정수형 변수 a,b,c 선언
	printf("곱하기 할 첫번째 수를 입력하세요 : ");
	scanf("%d", &a);
	printf("곱하기 할 두번째 수를 입력하세요 : ");
	scanf("%d", &b);
	c=multi(a,b); //함수호출 
	printf("실행결과 : %d X %d = %d\n", a, b, c);
}

int multi(int x, int y){
	return (x*y);
}