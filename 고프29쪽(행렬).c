#include <stdio.h>
 
void DumpMat2(int e[][4]); // 4x4 ����� ��� 
 
int main_matrix2(void) {
	int i,j;
	int Sum;
	int e[4][4] = {{1,2,1,5},{0,2,3,1},{1,1,1,3},{2,1,3,1}};
	
	// ��Ŀ��� �� ���� ���� ��� 
	for(i=0; i<4; i++) {
		Sum = 0;
		for(j=0; j < 4; j++) {
			printf("%2d ",e[i][j]);
			Sum += e[i][j];
		}
		printf ("=%d\n", Sum);
	}
	
	/*// Practice 1) ��Ŀ��� �� �࿡�� ���� ū ���Ҹ� ��� 
	int max = -100;
	for(i=0; i<4; i++) {
		max = -100;
		for(j=0; j < 4; j++) {
			printf("%2d ",e[i][j]);
			if(max < e[i][j]) {
				max = e[i][j];
			}
		}
		printf("���� ū ���Ҵ� %d\n", max); 
	}
	
	// Practice 2) ��Ŀ��� �� ���� ���� ��� 
	DumpMat2(e);
	for(i=0; i<4; i++) {
		Sum = 0;
		for(j=0; j < 4; j++) {
			Sum += e[j][i];
		}
		printf ("=%d ", Sum); 
	}*/
}

void DumpMat2(int e[][4]) {
	int i,j;
	for(i=0; i<4; i++) {
		for(j=0; j < 4; j++) {
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}
