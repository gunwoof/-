#include <stdio.h>
#include <math.h>

int isPrimeNumber(int n); // 소수 판별기 

int main_scope1(void) {
	int num;
	
	// 소수를 판별하여 출력 
	printf("숫자를 입력하세요!\n");
	scanf_s("%d", &num);
	isPrimeNumber(num);
	if(isPrimeNumber(num) == 0) {
		printf("num은 합성수 입니다");
	}
	else if(isPrimeNumber(num) == 1) {
		printf("num은 소수 입니다");
	}
} 

int isPrimeNumber(int n) {
	int i;
	int stdNum = (int) sqrt(n); // 소소를 구할때 루트씌운 것까지 나눠보면 된다 
	for(i=2;i<=stdNum;i++) {
		if(n % i == 0) {
			return 0;
		}
		
	}
	return 1;
}
