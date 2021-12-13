#include <stdio.h>

// 1. 0으로 시작하지 않는다 
// 2. 1이 두 번 연속으로 나타나지 않는다.
// N자리의 수 중 이를 만족하는 수의 개수
static int binary(int n/*자리수*/, int one/*바로 앞의 수*/);

int main_recursion12(void) {
	int i; 
	for(i=1; i<=10; i++) {
		printf("%d는 %d\n", i, binary(i-1,1));
	}
}

int binary(int n/*자리수*/, int one/*바로 앞의 수*/) {
	int count=0;
	if(n == 0) 
		return 1;
	count += binary(n-1, 0);
	if(one == 0) {
		count += binary(n-1, 1);
	}
	return count;
}
