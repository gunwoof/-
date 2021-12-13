#include <stdio.h> 



// 정수 n을 1, 2, 3의 합으로 나타내는 방법(순서가 다르면 다른것으로 취급) 
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
