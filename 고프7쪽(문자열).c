#include <stdio.h>
#include <string.h>

int main_string1(void) {
	int i;
	int count = 0;
	char s[30];
	
	gets(s);
	// 대문자만 출력 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z')) {
			printf("%c", s[i]);
		}
	}
	
	/*// Practice 1) 소문자만 뽑아서 출력해라 
	for(i = 0; i < strlen(s); i++) {
		if ( ('a' <= s[i]) && (s[i] <= 'z')) {
			printf("%c", s[i]);
		}
	}
	
	// Practice 2) 대문자를 카운트한 것을 출력해라 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z')) {
			count++;
		}
	}
	printf("%d", count);
	
	// Practice 3) 대문자와 소문자를 둘 다 뽑아서 출력해라 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z') || ('a' <= s[i]) && (s[i] <= 'z')) {
			printf("%c", s[i]);
		}
	}*/
}
