#include <stdio.h>
#define Len 10

int main_array5(void) {
	int i;
	int ele[Len]={3,2,0,1,-4,10,-5,5,-1,9}; 
	int sum =0;
	
	// 배열원소 중 제일 큰 원소를 출력 
	int max = -100;
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
		}	
	}
	printf("Max %d\n", max);
	
	/*// Practice 0) 모든 배열원소를 더한 것을 출력 
	for (i=0; i < Len; i++) {
		sum += ele[i]	
	}
	printf("%d\n", sum);
	
	// Practice 1) 배열원소 중 제일 작은 원소를 출력 
	int minimum = 100;
	
	for (i=0; i < Len; i++) {
		if(minimum > ele[i]) {
			minimum = ele[i];
		}	
	}
	printf("Minimum %d\n", minimum);
	
	// Practice 2) 배열원소 중 제일 큰 원소의 index를 출력
	int max = -100;
	int maxi; // 제일 큰 원소의 index 
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
			maxi = i;
		}	
	}
	printf("%d\n", maxi);
	
	// Practice 3) 배열원소 중 제일 큰 원소와 두번째로 큰 원소를 출력 
	int max = -100;
	int maxi; // 제일 큰 원소의 index
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
			maxi = i; 
		}	
	}
	printf("Max %d\n", max);
	ele[maxi] = -100; // 가장 큰 수를 가장 작을 수로 만들기 
	
	max = -100; // max를 재정의 안해주면 max값은 10인 상태로 코드 진행...
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i]; 
			maxi = i;
		}	
	}
	printf("Max %d\n", max); // 두 번째로 큰 원소 출력 */
	
	
	
}
