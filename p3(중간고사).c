#include <stdio.h>

void func(int a[]) {
	// i��° ���ҿ� i�� ���Ѵ�.
	int i;
	for(i=0;i<3;i++){
		a[i]+i+1;
	} 
}

int sum(int a[]) {
	// �� ������ ������ ���� ���� �����Ѵ�.
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
