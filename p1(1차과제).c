#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_1(void) {
	int i;
	int OddSum =0;
	int EvenSum =0;
	int AllSum; 
	
	int OddMatter[3];
	int EvenMatter[2];
	printf("5���� �ܾ �� ������ ���߾����� �Է��� �ּ���!\n");
	scanf_s("%d %d %d %d %d", &OddMatter[0], &EvenMatter[0], &OddMatter[1], &EvenMatter[1], &OddMatter[2]);
	
	// Ȧ�� ��° ���� 
	for(i=0; i < 3; i++){
		if(OddMatter[i] <=2) {
			OddSum += OddMatter[i] -2; 
		}
		else if (3 <= OddMatter[i] && OddMatter[i] <= 6) {
			OddSum += OddMatter[i] -2;
		}
		else if(OddMatter[i] >= 7) {
			OddSum += 5;
		}
	}
	
	// ¦�� ��° ���� 
	for(i=0; i < 2; i++){
		if(EvenMatter[i] <=3) {
			EvenSum += EvenMatter[i] - 3; 
		}
		else if (4 <= EvenMatter[i] && EvenMatter[i] <= 7) {
			EvenSum += EvenMatter[i] -3;
		}
		else if(EvenMatter[i] >= 8) {
			EvenSum += 5;
		}
	}
	
	// �� �г�Ƽ�� �� 
	AllSum = OddSum + EvenSum;
	printf("�г�Ƽ�� ����%d", AllSum);	
}
