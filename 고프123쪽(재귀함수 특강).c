#include <stdio.h>

// 2xn ũ���� ���簢���� 1x2 or 2x1Ÿ�Ϸ� ä��� ���
static int tile(int n);

int main_recursion13(void) {
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
