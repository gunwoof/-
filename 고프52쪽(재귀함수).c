#include <stdio.h>

int fact(int n); // !(���丮��)

int main_recursion1(void) {
	int a;
	
	// !(���丮��) ��� 
	a = fact(3);
	printf("%d",a);
}

int fact(int n) {
	if(n == 1) {
		return 1; // ������ �� 
	} 
	else {
		return n*fact(n-1); // ��Ģ 
	}
}
