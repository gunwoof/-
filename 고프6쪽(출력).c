#include <stdio.h>
//#include <string.h>

int main_print2(void) {
	int i;
	char s[8];
	
	gets(s);
	// (�Է��� �� �״��)(10���� �ƽ�Ű�ڵ�, 16���� �ƽ�Ű�ڵ�, ����) ��� 
	printf("%s\n", s);
	for(i = 0; i < 8; i++) {
		printf("%d %x %c\n", s[i], s[i], s[i]);
	} 
	
	/*// Practice 1) ������ ������ ī��Ʈ�� ���� ����ض� 
	printf("���ڿ��� �Է��� �ּ���!\n");
	scanf_s("%s", s, sizeof(s));
	
	printf("%d", strlen(s));*/
	
	
	
}
