#include <stdio.h>
#include <string.h>

int main_string3(void) {
	int i;
	int capital = 0; // �빮�� ī��Ʈ 
	int miniscule = 0;  // �ҹ��� ī��Ʈ 
	int others = 0; // ��������ȣ ī��Ʈ 
	char s[30];
	
	gets(s);
	// �빮�� - > �ҹ���, �ҹ��� -> �빮�ڷ� �ٲ㼭 ��� 
	for(i=0; i < strlen(s); i++) {
		if(('A'<=s[i]) && (s[i]<='Z')) {
			s[i] += ('a'-'A');
		}
		else if(('a'<=s[i]) && (s[i]<='z')) {
			s[i] -= ('a'-'A');
		}
	}
	printf("%s\n", s);
	
	/*// Practice 1) "else"�� �����ϸ� ��� �ɱ�?
	// �빮�ڸ� ġ�� �ҹ��ڸ� ġ�� ������ �빮�ڷ� ��Ⱥ�Ǿ� ���
	
	// Practice 2)  �빮�� - > �ҹ���, �ҹ��� -> �빮��, ��������ȣ -> blank(' ')�� �ٲ㼭 ���
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
	
	// Practice 3)  A - > B, B -> C --- Z -> ' ', ' ' - > A(���� �빮�ڸ�)�� ��Ģ�� ����� ��------------------ ���ǹ� Ȱ��
	for(i=0; i < strlen(s); i++) {
		if(s[i] == 'Z') {
			s[i] = 'A';
		}
		else {
			s[i] += 1; 
		}
	}
	printf("%s\n", s);
	
	// Practice 4)  A - > B, B -> C --- Z -> A(���� �빮�ڸ�)�� ��Ģ�� ����� ��------------------ �� �� �������� ����(������ �̿�)
	for(i=0; i < strlen(s); i++) {
		if(('A'<=s[i]) && (s[i]<='Z')) {
			s[i] = 'A' + (s[i] - 'A' + 1) % 26; 
		}
	}
	printf("%s\n", s);*/
}
