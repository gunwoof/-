#include <stdio.h>

int count;

int fibo(int n); // 피보나치 수열 

int main_recursion2(void) {
	int a;
	
	// 피보나치 수열 출력 
	a = fibo(3);
	printf("%d\n", a); 
	
	// Practice 2) fibo함수가 돈 횟수 출력 
	printf("%d\n", count);
	
}

int fibo(int n) {
	count++;
	if(n == 1) {
		return 1; // 초항의 값  
	}
	else if(n == 2) {
		return 1; // 초항의 값 
	}
	else {
		return fibo(n-1)+fibo(n-2); //규칙 
	}
} 
