#include <stdio.h>

// �� ĭ or �� ĭ���� ������ Ÿ���� �ִ�
// ���̰� n�� Ÿ���� ���� �� �ִ� ����� �� 
static int tile(int n);

int main_recursion14(void) {
	int i;
	for(i=1; i<=10; i++) {
		printf("���̰�%d�� Ÿ���� ������ %d\n", i, tile(i));
	}
}

int tile(int n) {
	if(n == 1)
		return 1;
	if(n == 2)
		return 2;
	return tile(n-1) + tile(n-2);
}

