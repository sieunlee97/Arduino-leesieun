#include <stdio.h>
void main() {
	int a;
	while(1){
		printf("짝수-홀수 판별할 정수를 입력하세요.\n");
		printf("종료할 때는 숫자 0을 입력하세요.\n");
		scanf("%d", &a); //scanf함수는 변수앞ㅍ에 &(어드레스기호)를 붙입니다.
		if(a==0){
			//IoT로 전송받은 값이 0이면 반복문 종료한다.(아래)
			break;
		}
	//분기문 if문
		if(a%2==0){
			printf("입력하신 숫자 %d는 짝수입니다.\n", a);
		}
		if(a%2==1){
			printf("입력하신 숫자 %d는 홀수입니다.\n", a);
		}
	}
	printf("프로그램이 종료되었습니다.\n");
}