#include <stdio.h>

// 1. 0���� �������� �ʴ´� 
// 2. 1�� �� �� �������� ��Ÿ���� �ʴ´�.
// N�ڸ��� �� �� �̸� �����ϴ� ���� ����
static int binary(int n/*�ڸ���*/, int one/*�ٷ� ���� ��*/);

int main_recursion12(void) {
	int i; 
	for(i=1; i<=10; i++) {
		printf("%d�� %d\n", i, binary(i-1,1));
	}
}

int binary(int n/*�ڸ���*/, int one/*�ٷ� ���� ��*/) {
	int count=0;
	if(n == 0) 
		return 1;
	count += binary(n-1, 0);
	if(one == 0) {
		count += binary(n-1, 1);
	}
	return count;
}
