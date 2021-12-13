#include <stdio.h>

int zero, one;

int Fibo(int n);
int FiboZero(int n);
int FiboOne(int n);

int main_recursion9(void) {
	int i;
	
	// Fibo(0)과 Fibo(1)이 호출된 횟수(전역변수 사용) 
	for(i=0; i<10; i++) {
		zero=0, one=0;
		Fibo(i);
		printf("%d, 0은 %d, 1은 %d\n", i, zero, one);
	}
	
	// Fibo(0)과 Fibo(1)이 호출된 횟수(return 사용 but return이 한번 밖에 안되기 때문에 둘로 쪼갬)
	for(i=0; i<10; i++) {
		printf("%d, 0은 %d, 1은 %d\n", i, FiboZero(i),FiboOne(i));
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

