#include <stdio.h>
#define Len 10
#define Small -1000

void DumpArray(int e[]);

int main_array8(void) {
	int i, j;
	int maxi, max;
	int ele[Len] = {3, 2, 0, 1, -4, 10, -5, 5, -1, 9};
	int tmp;
	
	// ���� ū �� ���� ������������ �����Ͽ� ��� 
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
	
	/*// Practice 1) "DumpArray"�� �ݺ��� �ȿ� �־ ���� (=���������� �Ǵ� ����) 
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
	
	// Practice 2) ���� ���� �� ���� ������������ �����Ͽ� ���
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
