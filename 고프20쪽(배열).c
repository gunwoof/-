#include <stdio.h>
#define Len 10
#define Small -1000

void DumpArray(int e[]);

int main_array8(void) {
	int i, j;
	int maxi, max;
	int ele[Len] = {3, 2, 0, 1, -4, 10, -5, 5, -1, 9};
	int tmp;
	
	// 제일 큰 수 부터 내림차순으로 나열하여 출력 
	for(i=0; i < Len; i++) {
		maxi = 0;
		max = Small;
		for(j=i; j < Len; j++) {
			if(max < ele[j]) {
				max = ele[j];
				maxi = j;
			}
		}
		tmp = ele[maxi];
		ele[maxi] = ele[i];
		ele[i] = tmp;
	}
	DumpArray(ele);
	
	/*// Practice 1) "DumpArray"를 반복문 안에 넣어서 조사 (=내림차순이 되는 과정) 
	for(i=0; i < Len; i++) {
		maxi = 0;
		max = Small;
		for(j=i; j < Len; j++) {
			if(max < ele[j]) {
				max = ele[j];
				maxi = j;
			}
		tmp = ele[maxi];
		ele[maxi] = ele[i];
		ele[i] = tmp;
		}
	DumpArray(ele);
	}
	
	// Practice 2) 제일 작은 수 부터 오름차순으로 나열하여 출력
	for(i=0; i < Len; i++) {
		maxi = 0;
		max = 1000;
		for(j=i; j < Len; j++) {
			if(max > ele[j]) {
				max = ele[j];
				maxi = j;
			}
		}
		tmp = ele[maxi];
		ele[maxi] = ele[i];
		ele[i] = tmp;
	}
	DumpArray(ele);*/
	
}
