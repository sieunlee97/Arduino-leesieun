#include <stdio.h>
#include <string.h> //strlen(문자열길이), strcmp(문자열의비교함수)

//문자열의 길이를 구하는 프로그램.
void main() {
	char string[200]; //200바이트 크기의 char형 변수명 string을 배열변수로 생성
	printf("문자를 입력한 후 ENTER키를 누르면 입력한 문자열의 길이가 출력됩니다.\n");
	printf("stop 문자를 입력하면 프로그램이 종료됩니다.\n");
	do {
		scanf("%s", &string);
		if(strcmp("stop", string)==0){ //0은 true/false 개념 아니고, 인덱스 0번값이 존재
			printf("프로그램을 종료합니다.\n");
			break;
		}
		printf("입력한 문자열의 길이는 %d입니다.\n", strlen(string));
	}while(1);
}