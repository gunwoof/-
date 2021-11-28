#include <stdio.h>
#include <string.h>

/*N과 N개의 숫자들이 주어진다. 숫자들은 짝수 개의 자리수를 가지며
이 이등분하여 왼쪽과 오른쪽 부분으로 나누어 두 부분의 자리수의 합을 구한다.
예를 들어 123402의 경우 왼쪽 부분의 합은 1+2+3이며 오른쪽 부분의 합은
4+0+2 이다.
N개의 숫자 중 왼쪽부분의 숫자 합과 오른쪽 부분의 숫자 합이 같은
숫자의 비율을 출력하시오 (소수 2째 자리까지 출력:  %.2lf로만 출력하면 됨)
예1) 입력: 3 123402 2244 1001   출력: 0.67
예2) 입력: 2 11112020 3011       출력: 0.5*/

// n개의 문자를 받는 로직
// 나누어서 합하는 로직
// 양쪽이 같을 비율을 구하는 로직 

int main(void) {
	int i,j;
	int N;
	char Number[100]; // 숫자를 문자열로 받기 
	int bNumber=0, aNumber=0; // 앞 숫자/뒷 숫자 
	int count=0; // 앞 숫자와 뒷 숫자가 같은 개수 
	double rate=0;
	
	
	scanf_s("%d", &N);
	for(i=0; i<N; i++) {
		bNumber=0;
		aNumber=0;
		scanf_s("%s", Number);
		for(j=0; j<strlen(Number)/2; j++)
			bNumber += Number[j];
		for(j=strlen(Number)/2; j<strlen(Number); j++)
			aNumber += Number[j];
		if(bNumber==aNumber)
			count++;
	}
	rate = (double)count/N;
	printf("%.2f", rate);
	
	
	
	
}
