#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Score[6];
	printf("x, y, z�� ���� ������ ���� ������� �Է��Ͻÿ�!\n");
	scanf_s("%d %d %d %d %d %d", &Score[0], &Score[1], &Score[2], &Score[3], &Score[4], &Score[5]);
	
	// ���� ���ǹ� ����ϱ� 
	if(Score[5] == Score[2]) {
		if(Score[4] == Score[1]) {
			if(Score[3] == Score[0]) {
				printf("A"); exit(0); 
			}
			else if(Score[0]/2 <= Score[3] && Score[3] <Score[0]) {
				printf("B"); exit(0);
			}
			printf("C");
		}
		else if(Score[1]/2 <= Score[4] && Score[4] <Score[1]) {
			printf("D"); exit(0);
		}
		printf("E"); exit(0);
	} 
	else {
		printf("F"); exit(0);
	}
	
}

