#include <stdio.h>

void func(int a[]) {
	// i번째 원소에 i를 더한다.
	int i;
	for(i=0;i<3;i++){
		a[i]+i+1;
	} 
}

int sum(int a[]) {
	// 각 원소의 제곱의 합을 구해 리턴한다.
	int i;
	int sum1=0;
	for(i=0;i<3;i++) {
		sum1 += (a[i]+i+1)*(a[i]+i+1);
	}
	return sum1;
	
}

int main(void) {
	int i;
	int b[3];
	for(i=0;i<3;i++) {
		scanf("%d", &b[i]);
	}
	
	func(b);
	printf("%d\n", sum(b));	
}
