#include <stdio.h>
//#include <string.h>

int main(void) {
	int i;
	char s[8];
	
	/*printf("���ڿ��� �Է��� �ּ���!\n");
	scanf_s("%s", s, sizeof(s));
	
	
	// Count the number of characters
	printf("%d", strlen(s));*/
	
	gets(s);
	printf("%s\n", s);
	for(i = 0; i < 8; i++) {
		printf("%d %x %c\n", s[i], s[i], s[i]);
	} 
	
	
	
}
