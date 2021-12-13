#include <stdio.h>

int zero, one;

int Fibo(int n);
int FiboZero(int n);
int FiboOne(int n);

int main_recursion9(void) {
	int i;
	
	// Fibo(0)�� Fibo(1)�� ȣ��� Ƚ��(�������� ���) 
	for(i=0; i<10; i++) {
		zero=0, one=0;
		Fibo(i);
		printf("%d, 0�� %d, 1�� %d\n", i, zero, one);
	}
	
	// Fibo(0)�� Fibo(1)�� ȣ��� Ƚ��(return ��� but return�� �ѹ� �ۿ� �ȵǱ� ������ �ѷ� �ɰ�)
	for(i=0; i<10; i++) {
		printf("%d, 0�� %d, 1�� %d\n", i, FiboZero(i),FiboOne(i));
	}
}

int Fibo(int n) {
	if(n == 0) {
		zero++;
		return 0;
	}
	if(n == 1) {
		one++;
		return 1;
	}
	return Fibo(n-1) + Fibo(n-2);
}

int FiboZero(int n) {
	if(n == 0)
		return 1;
	if(n == 1)
		return 0;
	return FiboZero(n-1) +FiboZero(n-2);
}

int FiboOne(int n) {
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return FiboOne(n-1) +FiboOne(n-2);
}

