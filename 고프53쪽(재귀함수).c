#include <stdio.h>

int count;

int fibo(int n); // �Ǻ���ġ ���� 

int main_recursion2(void) {
	int a;
	
	// �Ǻ���ġ ���� ��� 
	a = fibo(3);
	printf("%d\n", a); 
	
	// Practice 2) fibo�Լ��� �� Ƚ�� ��� 
	printf("%d\n", count);
	
}

int fibo(int n) {
	count++;
	if(n == 1) {
		return 1; // ������ ��  
	}
	else if(n == 2) {
		return 1; // ������ �� 
	}
	else {
		return fibo(n-1)+fibo(n-2); //��Ģ 
	}
} 
