#include <stdio.h>
#define Len 10

int main_array4(void) {
	int i;
	int ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int answer1;
	int answer2;
	int sum =0;
	
	
	
	// index�� 2, 3, 4, 5, 6, 7, 8, 9, 0, 1������ �Ͽ� �迭���� ���  
	for(i = 0; i < Len; i++) {
		printf("%d ", ele[i+2 % 10]);
	}
	
	/*// Practice 1) 2���� ������ �Է¹ް�, 2�� ���� ������ ���Ҹ� ��� (index�� ��������, ���� �Է°����� ���� ��ȣ�ϴ�)
	// -> ���⼭�� ���� �Է°� ���̸� ���Ѵ� 
	scanf_s("%d %d", &answer1, &answer2);
	for(i=0; i < Len; i++) {
		if(answer1 < ele[i] && ele[i] < answer2) {
			printf("%d ", ele[i]);
		}
	}
	
	// Practice 2) 2���� ������ �Է¹ް�, 2�� ���� ������ ���Ҹ� ���Ͽ� ��� (index�� ��������, ���� �Է°����� ���� ��ȣ�ϴ�)
	// -> ���⼭�� ���� �Է°� ���̸� ���Ѵ�
	scanf_s("%d %d", &answer1, &answer2);
	for(i=0; i < Len; i++) {
		if(answer1 < ele[i] && ele[i] < answer2) {
			sum += ele[i];
			
		}
	}
	printf("%d", sum);
	
	// Practice 3) index 0���� �� index�� �� �迭 ������ ���� ��� 
	for(i = 0; i < Len; i=i+2) {
		sum += ele[i];
	}
	printf("%d", sum);*/
}


