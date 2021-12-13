#include <stdio.h>

// 한 칸 or 두 칸으로 구성된 타일이 있다
// 길이가 n인 타일을 만들 수 있는 경우의 수 
static int tile(int n);

int main_recursion14(void) {
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

