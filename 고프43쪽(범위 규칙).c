#include <stdio.h>
#include <math.h>

int isPrimeNumber(int n); // �Ҽ� �Ǻ��� 

int main_scope1(void) {
	int num;
	
	// �Ҽ��� �Ǻ��Ͽ� ��� 
	printf("���ڸ� �Է��ϼ���!\n");
	scanf_s("%d", &num);
	isPrimeNumber(num);
	if(isPrimeNumber(num) == 0) {
		printf("num�� �ռ��� �Դϴ�");
	}
	else if(isPrimeNumber(num) == 1) {
		printf("num�� �Ҽ� �Դϴ�");
	}
} 

int isPrimeNumber(int n) {
	int i;
	int stdNum = (int) sqrt(n); // �ҼҸ� ���Ҷ� ��Ʈ���� �ͱ��� �������� �ȴ� 
	for(i=2;i<=stdNum;i++) {
		if(n % i == 0) {
			return 0;
		}
		
	}
	return 1;
}
