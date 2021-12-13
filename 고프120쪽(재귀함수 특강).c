#include <stdio.h>

int min(int x, int y); // 둘 중 작은 것 출력 

// 1. n%3 == 0 이면  3으로 나눈다  2. n%2 == 0이면 2로 나눈다 3. 1을 뺀다
// 1, 2, 3 연산을 적절히 사용하여 1을 만든다.
// 연산을  사용하는 횟수의 최소값 
static int make(int n); 

int main_recursion10(void) {
	int i;
	
	for(i=1; i < 20; i++) {
		printf("%d는 %d\n", i, make(i));
	}
} 

int min(int x, int y) {
	return (x>=y? y:x);
}

static int make(int n) {
	int mm=10000;
	if(n == 1) 
		return 0;
	if(n % 3 == 0) {
		mm = min(mm, make(n/3));
	}
	if(n % 2 == 0) {
		mm = min(mm, make(n/2));
	}
	mm = min(mm, make(n-1));
	return mm+1;
}
