#include <stdio.h>

int min(int x, int y); // �� �� ���� �� ��� 

// 1. n%3 == 0 �̸�  3���� ������  2. n%2 == 0�̸� 2�� ������ 3. 1�� ����
// 1, 2, 3 ������ ������ ����Ͽ� 1�� �����.
// ������  ����ϴ� Ƚ���� �ּҰ� 
static int make(int n); 

int main_recursion10(void) {
	int i;
	
	for(i=1; i < 20; i++) {
		printf("%d�� %d\n", i, make(i));
	}
} 

int min(int x, int y) {
	return (x>=y? y:x);
}

static int make(int n) {
	int mm=10000;
	if(n == 1) 
		return 0;
	if(n % 3 == 0) {
		mm = min(mm, make(n/3));
	}
	if(n % 2 == 0) {
		mm = min(mm, make(n/2));
	}
	mm = min(mm, make(n-1));
	return mm+1;
}
