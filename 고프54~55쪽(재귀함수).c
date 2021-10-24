#include <stdio.h>

void hanoi(char from, char mid, char to, int n); // �ϳ��� Ÿ��(3�̻�)
void hanoix(char from, char mid, char to, int n); // �ϳ��� Ÿ��(3�̻�)


int main_recursion3(void) {
	
	// �ϳ��� Ÿ�� ��� 
	hanoi('A','B','c',3);
	
	// 'A'�κ��� ����� �������� ���� ���
	
	// n=5, 'A'�� 3���� ���븦 �������� ����� ���� ��� 
	hanoix('A','B','C',5);
	  
	
}

void hanoi(char from, char mid, char to, int n) {
	if(n == 1) {
		printf("move from %c to %c\n", from, to);
		return;
	} 
	else {
		hanoi(from, to, mid, n-1);
		hanoi(from, mid, to, 1);
		hanoi(mid, from, to, n-1);
		return;
	}
}

void hanoix(char from, char mid, char to, int n) {
	int count[3] = {5,0,0};
	if(n == 1) {
		
		printf("move from %c to %c\n", from, to);
		return;
	} 
	else {
		hanoi(from, to, mid, n-1);
		hanoi(from, mid, to, 1);
		hanoi(mid, from, to, n-1);
		return;
	}
}
