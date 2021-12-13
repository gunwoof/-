#include <stdio.h>

// 2xn 크기의 직사각형을 1x2 or 2x1타일로 채우는 방법
static int tile(int n);

int main_recursion13(void) {
	int i;
	for(i=1; i<=10; i++) {
		printf("길이가%d의 타일의 개수는 %d\n", i, tile(i));
	}
}

int tile(int n) {
	if(n == 1)
		return 1;
	if(n == 2)
		return 2;
	return tile(n-1) + tile(n-2);
} 
