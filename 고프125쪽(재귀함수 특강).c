#include <stdio.h>

//�������� ���� �� ���� ���̸� k�� ���� ��, �� ���� ���̰� k�� ���ﰢ���� �߰��Ѵ�
// n��°�� k�� ���Ͽ��� 
int wave(int n);

int main_recursion15(void) {
	int i;
	for(i=1; i<=10; i++) {
		printf("%d��°�� ���̴� %d\n", i, wave(i));
	}
}

int wave(int n) {
	if(n <= 3)
		return 1;
	return (wave(n-3)+wave(n-2));
}
