#include <stdio.h>

int main_2(void) {
	int i;
	int Sum=0;
	int Event[5]; 
	int min=1000;
	int mini =0;
	printf("5개의 실제 사건의 수를 입력하시오!\n");
	scanf_s("%d %d %d %d %d", &Event[0], &Event[1], &Event[2], &Event[3], &Event[4]);
	
	 
	// 최소값 구하기 
	for(i=0; i<5 ; i++) {
		if(min > Event[i]) {
			min=Event[i];
			mini=i;
		}
	}
	
	// 축소할 사건 구하기 
	for(i=0; i<5 ; i++){
		if(mini < i && Event[mini] < Event[i]) {
			Sum += Event[i] - Event[mini];
		}
	}
	printf("축소된 사건의 수는 %d",Sum);
	
	

}
