#include <stdio.h>
#define Len 10
#define Small -100

void DumpArray(int e[]);

int main_array6(void) {
	int i, j;
	int maxi, max;
	int ele[Len] = {3, 2, 0, 1, -4, 10, -5, 5, -1, 9};
	
	// 큰 수부터 차례로 출력 but 값은 모두 -100이 됨  
	for(i=0; i<Len; i++) {
		maxi = 0;
		max = Small;
		for(j=0; j < Len; j++) {
			if(max < ele[j]) {
				max = ele[j];
				maxi = j;
			}
		}
		printf("%d ", max);
		ele[maxi] = Small;
	}
	printf("\n");
	DumpArray(ele);
}


