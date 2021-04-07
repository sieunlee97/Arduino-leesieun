#include <stdio.h>
void main() {
	printf("안녕하세요. C언어 은행입출금 프로그램입니다.\n");
	int menu, total, inputMoney, drawMoney;
	total=0;
	while(1){
		printf("1.입금 / 2.출금 / 3.잔고 / 4.종료\n");
		scanf("%d", &menu);
		
		if(menu==1){
			printf("현재 잔액 : %d원\n", total);
			printf("입금할 금액 : ");
			scanf("%d", &inputMoney);
			
			total = total+inputMoney;
			printf("입금 성공! 현재 잔액 : %d원\n\n\n", total);
		}else if(menu==2){
			printf("현재 잔액 : %d원\n", total);
			printf("출금할 금액 : ");
			scanf("%d", &drawMoney);
			if(total>drawMoney){
				total = total-drawMoney;
				printf("출금 성공! 현재 잔액 : %d원\n\n\n", total);
			} else {
				printf("출금 실패! 잔액이 부족합니다.");
				printf("현재 잔액 : %d원\n\n\n", total);
			}
			
		} else if(menu==3) {
			printf("현재 잔액 : %d원\n\n\n", total);
		} else if(menu==4) {
			printf("현재 잔액 : %d원\n", total);
			printf("프로그램을 종료합니다.\n");
			break;
		} else {
			printf("잘못 입력했습니다.\n\n\n");
		}
	}
	
}