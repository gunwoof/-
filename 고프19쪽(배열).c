#include <stdio.h>
#define Len 10
#define Small -1000

void DumpArray(int e[]);

int main_array7(void) {
	int i, j;
	int maxi, max;
	int ele[Len] = {3, 2, 0, 1, -4, 10, -5, 5, -1, 9};
	int tmp;
	
	// ���� ū ���� ele[0]�� ��ġ�� �ٲ㼭 ��� 
	maxi = 0;
	max = Small;
	for(i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
			maxi = i;
		}
	}
	tmp = ele[maxi]; 
	ele[maxi] = ele[0];
	ele[0] = tmp;
		
	DumpArray(ele);
	
	/*// Practice 1) e�� index 1 ����(e[0]�� ����) ���� ū ���� ã�Ƽ� e[1]�� ��ġ�� �ٲ㼭 ��� 
	maxi = 0;
	max = Small;
	for(i=1; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
			maxi = i;
		}
	}
	tmp = ele[maxi]; 
	ele[maxi] = ele[1];
	ele[1] = tmp;
		
	DumpArray(ele);*/
}


