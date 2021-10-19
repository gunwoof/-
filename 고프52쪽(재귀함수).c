#include <stdio.h>

int fact(int n); // !(팩토리얼)

int main_recursion1(void) {
	int a;
	
	// !(팩토리얼) 출력 
	a = fact(3);
	printf("%d",a);
}

int fact(int n) {
	if(n == 1) {
		return 1; // 초항의 값 
	} 
	else {
		return n*fact(n-1); // 규칙 
	}
}
