#include <stdio.h>
#include <string.h>

void main() {
	char buffer[80];
	char *p  =buffer;
	int len;
	int i=0;
	int cnt=0;
	
	printf("문자열을 입력하세요.");
	scanf("%s", p); //주소 인덱스를 가지고 있음.
	len=strlen(p);
	printf("문자열의 길이는 %d 입니다.", len);
	printf("p변수의 인덱스 주소는 %d \n", p);
	while(*p) {
		p++; //p변수에 주소 인덱스 값을 증가 *p 변수에 데이터가 공백이 나올떄까지 반복	
	}
	printf("while을 거친 후 p변수의 인덱스 주소는 %d \n", p);
	printf("문자열을 역순으로 출력하기 : \n");
	while(cnt<len){
		p--;
		printf("현재 인덱스 주소는 %d, 그리고 해당 인덱스 주소의 값은 ", p);
		putchar(*p); //현재 p인덱스 주소의 *p 변수값을 1개씩, 출력함수 putchar(1글자 출력)
		printf("\n");
		cnt++;
	}
	putchar('\n'); //글자를 출려가지 않고 엔터키를 누른 효과
	printf("출력한 이후의 인덱스 번호는 %d\n", p);
	getchar(); //버퍼내용 초기화, 공백을 입력해서 버퍼내용 삭제하는 효과
}