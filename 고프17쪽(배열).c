#include <stdio.h>
#define Len 10

int main_array5(void) {
	int i;
	int ele[Len]={3,2,0,1,-4,10,-5,5,-1,9}; 
	int sum =0;
	
	// �迭���� �� ���� ū ���Ҹ� ��� 
	int max = -100;
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
		}	
	}
	printf("Max %d\n", max);
	
	/*// Practice 0) ��� �迭���Ҹ� ���� ���� ��� 
	for (i=0; i < Len; i++) {
		sum += ele[i]	
	}
	printf("%d\n", sum);
	
	// Practice 1) �迭���� �� ���� ���� ���Ҹ� ��� 
	int minimum = 100;
	
	for (i=0; i < Len; i++) {
		if(minimum > ele[i]) {
			minimum = ele[i];
		}	
	}
	printf("Minimum %d\n", minimum);
	
	// Practice 2) �迭���� �� ���� ū ������ index�� ���
	int max = -100;
	int maxi; // ���� ū ������ index 
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
			maxi = i;
		}	
	}
	printf("%d\n", maxi);
	
	// Practice 3) �迭���� �� ���� ū ���ҿ� �ι�°�� ū ���Ҹ� ��� 
	int max = -100;
	int maxi; // ���� ū ������ index
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i];
			maxi = i; 
		}	
	}
	printf("Max %d\n", max);
	ele[maxi] = -100; // ���� ū ���� ���� ���� ���� ����� 
	
	max = -100; // max�� ������ �����ָ� max���� 10�� ���·� �ڵ� ����...
	
	for (i=0; i < Len; i++) {
		if(max < ele[i]) {
			max = ele[i]; 
			maxi = i;
		}	
	}
	printf("Max %d\n", max); // �� ��°�� ū ���� ��� */
	
	
	
}
