#include <stdio.h>
#include <string.h>

int main_array2(void) {
	int i = 0;
	int count[26] = {0,};
	int count1[52] = {0,};
	int count2[26] = {0,};
	int count3[2][26] = {{0,},{0,}};
	char s[30];
	
	gets(s);
	/*// (�� �빮�� : ����) 26�� ���� ��� 
	for(i = 0; i < strlen(s); i++) {
		if(('A'<=s[i]) && (s[i]<='Z')) {
			count[s[i] - 'A']++;
		}
	}
	for(i = 0; i < 26; i++) {
		printf("%c : %2d\n", 'A'+i, count[i]);
	}*/
	
	// Practice 1) (�� �ҹ��� : ����) 26�� ���� ��� 
	for(i = 0; i < strlen(s); i++) {
		if(('a'<=s[i]) && (s[i]<='z')) {
			count[s[i] - 'a']++;
		}
	}
	for(i = 0; i < 26; i++) {
		printf("%c : %2d\n", 'a'+i, count[i]);
	}
	
	/*// Practice 2) (�� �빮�ڿ� �ҹ���  : ����) �빮�ڿ� �ҹ��� 52�� ���� ���
	// Practice 2-1) count1[52]��� 
	for(i = 0; i < strlen(s); i++) {
	if(('A'<=s[i]) && (s[i]<='Z')) {
			count1[s[i] - 'A']++;
	}
	else if(('a'<=s[i]) && (s[i]<='z')) {
			count1[s[i] - 'a' + 26]++;
	}
	}
	for(i = 0; i < 26; i++) {
		printf("%c : %2d\n", 'A'+i, count[i]);
	}
	for(i = 26; 26 <= i && i < 52; i++) {
		printf("%c : %2d\n", 'a'+i-26, count[i]);
	}
	
	// Practice 2-2) count1[26], count2[26]�� ��� 
	for(i = 0; i < strlen(s); i++) {
	if(('A'<=s[i]) && (s[i]<='Z')) {
		count1[s[i] -'A']++;
		 
	}
	else if(('a'<=s[i]) && (s[i]<='z')) {
		count2[s[i]-'a']++;
	}
	}
	for(i = 0; i < 26; i++) {
		printf("%c : %2d\n", 'A'+i, count1[i]);
	}
	for(i = 0; i < 26; i++) {
		printf("%c : %2d\n", 'a'+i, count2[i]);
	}
	
	// Practice 2-3) count3[2][26]�� ���
	for(i = 0; i < strlen(s); i++) {
	if(('A'<=s[i]) && (s[i]<='Z')) {
		count3[0][s[i] - 'A']++;
	}
	else if(('a'<=s[i]) && (s[i]<='z')) {
		count3[1][s[i] - 'a']++;
	}
	for(i = 0; i < 26; i++) {
		printf("%c : %2d\n", 'A'+i, count3[0][i]);
	}
	for(i = 0; i < 26; i++) {
		printf("%c : %2d\n", 'a'+i, count3[1][i]);
	}
	}*/
}

