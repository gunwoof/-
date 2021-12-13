#include <stdio.h>

//나선에서 가장 긴 변의 길이를 k라 했을 때, 그 변에 길이가 k인 정삼각형을 추가한다
// n번째의 k를 구하여라 
int wave(int n);

int main_recursion15(void) {
	int i;
	for(i=1; i<=10; i++) {
		printf("%d번째의 길이는 %d\n", i, wave(i));
	}
}

int wave(int n) {
	if(n <= 3)
		return 1;
	return (wave(n-3)+wave(n-2));
}
