#include <stdio.h>
#define Len 10
#define Small -1000

void DumpArray(int e[]);
int Findlocation(int from, int e[]);

int main(void) {
	int i;
	int ele[Len] = {3, 2, 0, 1, -4, 10, -5, 5, -1, 9};
	int tmp;
	int loc;
	
	// 제일 큰 수 부터 내림차순으로 나열하여 출력(함수활용)
	for(i=0; i < Len; i++) {
		loc = Findlocation(i,ele);
		tmp = ele[loc];
		ele[loc] = ele[i];
		ele[i] = tmp;
	}
	DumpArray(ele);
}
	
	int Findlocation(int from, int e[]) {
		int j;
		int maxi = 0;
		int max = Small;
		for(j=from; j < Len; j++) {
			if(max < e[j]) {
			max = e[j];
			maxi = j;
			}
		}
		return maxi;
	}
