#include <stdio.h>
 
void DumpMat1(int e[][3]); // 3x3 ����� ��� 
 
int main_matrix1(void) {
	int a[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	int Sum; 
	// 3x3 ��� ��� 
	DumpMat1(a);
	printf("\n");
	
	// Practice 1) ����� ��� ���Ҹ� ���Ͽ� ��� 
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			Sum += a[i][j];
		}
	}
	printf("�հ�� %d\n", Sum);
	
	// Practice 2) ����� ���� �� ���� ū ���Ҹ� ��� 
	int max = -100;
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			if(max < a[i][j]) {
				max = a[i][j];
			}
		}
	}
	printf("���� ū ���ڴ� %d", max);
	 
}

void DumpMat1(int e[][3]) {
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}
