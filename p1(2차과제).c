#include <stdio.h>
#include <string.h>

/*정수범위내의 10진수가 주어진다. 2진수로 바꿀 때 1이 나오는 위치를 
모두 출력하시오. 출력에서 위치의 순서는 상관없다.
예1) 입력: 13   출력: 0 2 3
예2) 입력: 255   출력: 0 1 2 3 4 5 6 7*/

int main(void) {
	int i=0;
	int j=0;
	int a; // 10진수 
	int b[100]; // 2진수 거꾸로(=2진수의 자리를 출력) 
	
	scanf_s("%d" ,&a);
	
	
	while(!(a==0)) {
		b[i] = a % 2;
		a = a/2;
		i++;
	} 
	
	for(j=0;j<i;j++) {
		if(b[j]==1)
			printf("%d", j);
	}
		
}

