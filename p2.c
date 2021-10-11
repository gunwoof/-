#include <stdio.h>

int main_1(void) {
	int i;
	int Sum=0;
	int Event[5]; 
	printf("다섯 번째날->첫 번째날 순서로 5개의 사건의 수를 입력하시오!\n");
	scanf_s("%d %d %d %d %d", &Event[0], &Event[1], &Event[2], &Event[3], &Event[4]);
	
	for(i=0; i<4 ; i++) {
		Sum += Event[i+1] - Event[0];
		if(Event[i] > Event[i+1]) {
			printf("사건의 수가 전날 보다 큽니다.\n");
		}
	}
	printf("축소된 사건의 수는 %d",Sum);
	

}
