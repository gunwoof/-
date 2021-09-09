#include <stdio.h>
//#include <string.h>

int main_print2(void) {
	int i;
	char s[8];
	
	gets(s);
	// (입력한 것 그대로)(10진수 아스키코드, 16진수 아스키코드, 문자) 출력 
	printf("%s\n", s);
	for(i = 0; i < 8; i++) {
		printf("%d %x %c\n", s[i], s[i], s[i]);
	} 
	
	/*// Practice 1) 문자의 개수를 카운트한 것을 출력해라 
	printf("문자열을 입력해 주세요!\n");
	scanf_s("%s", s, sizeof(s));
	
	printf("%d", strlen(s));*/
	
	
	
}
