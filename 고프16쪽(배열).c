#include <stdio.h>
#define Len 10

int main_array4(void) {
	int i;
	int ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int answer1;
	int answer2;
	int sum =0;
	
	
	
	// index를 2, 3, 4, 5, 6, 7, 8, 9, 0, 1순서로 하여 배열원소 출력  
	for(i = 0; i < Len; i++) {
		printf("%d ", ele[i+2 % 10]);
	}
	
	/*// Practice 1) 2개의 정수를 입력받고, 2개 정수 사이의 원소를 출력 (index값 사이인지, 실제 입력값사이 인지 모호하다)
	// -> 여기서는 실제 입력값 사이를 구한다 
	scanf_s("%d %d", &answer1, &answer2);
	for(i=0; i < Len; i++) {
		if(answer1 < ele[i] && ele[i] < answer2) {
			printf("%d ", ele[i]);
		}
	}
	
	// Practice 2) 2개의 정수를 입력받고, 2개 정수 사이의 원소를 더하여 출력 (index값 사이인지, 실제 입력값사이 인지 모호하다)
	// -> 여기서는 실제 입력값 사이를 구한다
	scanf_s("%d %d", &answer1, &answer2);
	for(i=0; i < Len; i++) {
		if(answer1 < ele[i] && ele[i] < answer2) {
			sum += ele[i];
			
		}
	}
	printf("%d", sum);
	
	// Practice 3) index 0부터 한 index를 뛴 배열 원소의 합을 출력 
	for(i = 0; i < Len; i=i+2) {
		sum += ele[i];
	}
	printf("%d", sum);*/
}


