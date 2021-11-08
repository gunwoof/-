#include <stdio.h>

void hanoi(char from, char mid, char to, int n); // �ϳ��� Ÿ��(3�̻�)
void hanoiA(char from, char mid, char to, int n); // 'A'�κ��� ����� �������� ��� ��� 
void hanoix(char from, char mid, char to, int n); //  n=5, 'A'�� 3���� ���븦 �������� ����� ���� ���

int count =0;
int countpole[3] = {5,0,0};

int main_recursion3(void) {
	
/*	// �ϳ��� Ÿ�� ��� 
	hanoi('A','B','c',3);
	
	// 'A'�κ��� ����� �������� ��� ���
	hanoiA('A','B','C',3);
	printf("%d",count); */
	
	// n=5, 'A'�� 3���� ���븦 �������� ����� ���� ��� 
	hanoix('A','B','c',5);
	printf("%d",count);
	
	
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

void hanoiA(char from, char mid, char to, int n) {
	if(n == 1) {
		if(from == 'A') {
			count++;	
		} 
		printf("move from %c to %c\n", from, to);
		return;
	} 
	else {
		hanoiA(from, to, mid, n-1);
		hanoiA(from, mid, to, 1);
		hanoiA(mid, from, to, n-1);
		return;
	}
}

void hanoix(char from, char mid, char to, int n) {
	if(n == 1) {
		countpole[from - 'A']--;
		countpole[to - 'A']++;
		if(countpole[0] == 3) {
			count++;
		}
		printf("move from %c to %c\n", from, to);
		return;
	} 
	else {
		hanoix(from, to, mid, n-1);
		hanoix(from, mid, to, 1);
		hanoix(mid, from, to, n-1);
		return;
	}
}
