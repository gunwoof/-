#include <stdio.h>
#define N 3

static int cost[3][3] = {{26, 40, 83}, {49, 60, 57}, {13, 89, 99}}; //행은 집, 열은 색 

int min(int x, int y);


// 각각의 집을 빨강, 초록, 파랑으로 칠하는 비용이 주어졌을 때 인접한 집들의 색이 달라야한다
// 최소 비용 
int rgb(int n/*집*/, int from/*이전의 색*/); //지역변수 mm사용 

int main_recursion16(void) {
	
	// 지역변수 mm사용 
	printf("%d\n", rgb(0,-1));
}

int rgb(int n, int from) {
	int i;
	int mm = 100000;
	if(n == N)
		return 0;
	for(i =0; i<N; i++) {
		if(i == from)
			continue;
		mm = min(mm, rgb(n+1, i)+cost[n][i]);
	}
	return mm;
	
} 
