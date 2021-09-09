#include <stdio.h>
#include <string.h>

int main_string2(void) {
	int i;
	int capital = 0; // 대문자 카운트 
	int miniscule = 0;  // 소문자 카운트 
	int others = 0; //나머지 카운트 
	char s[30];
	
	gets(s);
	// 대문자와 소문자 카운트한것을 출력 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z')) {
			capital++;
		}
		else if ( ('a' <= s[i]) && (s[i] <= 'z')) {
			miniscule++;
		}
	}
	printf("%d %d\n", capital,miniscule);
	
	/*// Practice 1) 대문자, 소문자, 나머지 기호들 카운트한 것을 출력 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z')) {
			capital++;
		}
		else if ( ('a' <= s[i]) && (s[i] <= 'z')) {
			miniscule++;
		}
		else {
			others++;
		}
	}
	printf("대문자%d번\n소문자%d번\n나머지%d번\n", capital,miniscule, others);*/
}
