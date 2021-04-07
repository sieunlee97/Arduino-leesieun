#include <stdio.h>
void main() {
	int score[5]; //배열크기지정 공간 5개.
	int sum=0; //변수선언하면서 초기값 지정
	int cnt;
	for(cnt=0;cnt<5;cnt++){
		printf("입력(정수 %d)=>", cnt+1);
		scanf("%d", &score[cnt]);//score[0], score[1], ..., score[4] 총 다섯개 입력받기
	}
	
	for(cnt=0;cnt<5;cnt++){
		sum += score[cnt];
	}
	
	printf("총점 : %d, 평균 : %d\n", sum, sum/cnt);
}