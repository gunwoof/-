#include <stdio.h>
#include <string.h>

int main_string1(void) {
	int i;
	int count = 0;
	char s[30];
	
	gets(s);
	// �빮�ڸ� ��� 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z')) {
			printf("%c", s[i]);
		}
	}
	
	/*// Practice 1) �ҹ��ڸ� �̾Ƽ� ����ض� 
	for(i = 0; i < strlen(s); i++) {
		if ( ('a' <= s[i]) && (s[i] <= 'z')) {
			printf("%c", s[i]);
		}
	}
	
	// Practice 2) �빮�ڸ� ī��Ʈ�� ���� ����ض� 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z')) {
			count++;
		}
	}
	printf("%d", count);
	
	// Practice 3) �빮�ڿ� �ҹ��ڸ� �� �� �̾Ƽ� ����ض� 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z') || ('a' <= s[i]) && (s[i] <= 'z')) {
			printf("%c", s[i]);
		}
	}*/
}
