#include <stdio.h>
#include <string.h>

int main_string3(void) {
	int i;
	int capital = 0; // 대문자 카운트 
	int miniscule = 0;  // 소문자 카운트 
	int others = 0; // 나머지기호 카운트 
	char s[30];
	
	gets(s);
	// 대문자 - > 소문자, 소문자 -> 대문자로 바꿔서 출력 
	for(i=0; i < strlen(s); i++) {
		if(('A'<=s[i]) && (s[i]<='Z')) {
			s[i] += ('a'-'A');
		}
		else if(('a'<=s[i]) && (s[i]<='z')) {
			s[i] -= ('a'-'A');
		}
	}
	printf("%s\n", s);
	
	/*// Practice 1) "else"를 제거하면 어떻게 될까?
	// 대문자를 치든 소문자를 치든 무조건 대문자로 변횐되어 출력
	
	// Practice 2)  대문자 - > 소문자, 소문자 -> 대문자, 나머지기호 -> blank(' ')로 바꿔서 출력
	for(i=0; i < strlen(s); i++) {
		if(('A'<=s[i]) && (s[i]<='Z')) {
			s[i] += ('a'-'A');
		}
		else if(('a'<=s[i]) && (s[i]<='z')) {
			s[i] -= ('a'-'A');
		}
		else {
			s[i] = ' '; 
		}
	}
	printf("%s\n", s);
	
	// Practice 3)  A - > B, B -> C --- Z -> ' ', ' ' - > A(오직 대문자만)의 규칙을 만들어 출------------------ 조건문 활용
	for(i=0; i < strlen(s); i++) {
		if(s[i] == 'Z') {
			s[i] = 'A';
		}
		else {
			s[i] += 1; 
		}
	}
	printf("%s\n", s);
	
	// Practice 4)  A - > B, B -> C --- Z -> A(오직 대문자만)의 규칙을 만들어 출------------------ 한 줄 수식으로 끝냄(나머지 이용)
	for(i=0; i < strlen(s); i++) {
		if(('A'<=s[i]) && (s[i]<='Z')) {
			s[i] = 'A' + (s[i] - 'A' + 1) % 26; 
		}
	}
	printf("%s\n", s);*/
}
