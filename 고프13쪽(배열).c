#include <stdio.h>
#include <string.h>

int main_array1(void) {
	int i;
	int cA = 0; // A�� ���� ī��Ʈ 
	int cB = 0; // B�� ���� ī��Ʈ 
	char s[30];
	
	gets(s);
	// A�� ���� ī��Ʈ�� ����  ��� 
	for(i = 0; i < strlen(s); i++) {
		if(s[i] == 'A') {
			cA++;
		}
	}
	printf("%d\n", cA);
	
	/*// Practice 1) A�� B�� ������ ī��Ʈ�� ����  ��� 
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
