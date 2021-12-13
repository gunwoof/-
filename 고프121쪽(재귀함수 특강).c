#include <stdio.h> 



// ���� n�� 1, 2, 3�� ������ ��Ÿ���� ���(������ �ٸ��� �ٸ������� ���) 
static int make(int n);

int main_recursion11(void) {
	int i;
	for(i=1; i<=20; i++) {
		printf("%d %d\n", i, make(i));
	}
}

int make(int n) {
	int count=0;
	if(n == 0) 
		return 1;
	if(n >= 1) {
		count += make(n-1);
	}
	if(n >= 2) {
		count += make(n-2);
	}
	if(n >= 3) {
		count += make(n-3);
	}
	return count; 
} 
