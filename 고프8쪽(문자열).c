#include <stdio.h>
#include <string.h>

int main_string2(void) {
	int i;
	int capital = 0; // �빮�� ī��Ʈ 
	int miniscule = 0;  // �ҹ��� ī��Ʈ 
	int others = 0; //������ ī��Ʈ 
	char s[30];
	
	gets(s);
	// �빮�ڿ� �ҹ��� ī��Ʈ�Ѱ��� ��� 
	for(i = 0; i < strlen(s); i++) {
		if ( ('A' <= s[i]) && (s[i] <= 'Z')) {
			capital++;
		}
		else if ( ('a' <= s[i]) && (s[i] <= 'z')) {
			miniscule++;
		}
	}
	printf("%d %d\n", capital,miniscule);
	
	/*// Practice 1) �빮��, �ҹ���, ������ ��ȣ�� ī��Ʈ�� ���� ��� 
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
	printf("�빮��%d��\n�ҹ���%d��\n������%d��\n", capital,miniscule, others);*/
}
