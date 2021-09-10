#include <stdio.h>
#include <string.h>

int main_array1(void) {
	int i;
	int cA = 0; // A의 개수 카운트 
	int cB = 0; // B의 개수 카운트 
	char s[30];
	
	gets(s);
	// A의 개수 카운트한 것을  출력 
	for(i = 0; i < strlen(s); i++) {
		if(s[i] == 'A') {
			cA++;
		}
	}
	printf("%d\n", cA);
	
	/*// Practice 1) A와 B의 개수를 카운트한 것을  출력 
	for(i = 0; i < strlen; i++) {
		if(s[i] == 'A') {
			cA++;
		}
		else if(s[i] == 'B') {
			cB++;
		}
	}
	printf("A : %d\nB : %d\n", cA, cB);*/
}
