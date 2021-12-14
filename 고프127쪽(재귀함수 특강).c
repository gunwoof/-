#include <stdio.h>
#define N 5

int tri[5][5] = {{7}, {3, 8}, {8,1,0}, {2,7,4,4}, {4,5,2,6,5}};

int max(int x, int y);


// 삼각형의 경로에서 가장 큰 경로의 합(지역변수 mm사용)
int goDown(int n, int right);

int main_recursion17(void) {
	printf("%d\n", goDown(0,0));
}

int max(int x, int y) {
	return x>y? x:y;
}

int goDown(int n, int right) {
	int mm = -1;
	if(n == N) 
		return 0;
	mm = max(mm, goDown(n+1, right));
	mm = max(mm, goDown(n+1, right+1));
	return mm+tri[n][right];
}



 


