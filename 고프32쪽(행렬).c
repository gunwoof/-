#include <stdio.h>
#define Len 3
 
void DumpMat1(int e[][3]); // 3x3 ����� ��� 
void PlusMat(int e[][3]); // 3x3 ����� �� ���ҿ� +1�� ���� ��� 
void SquareMat(int e[][3]); // 3x3 ����� �� ���ҿ� ������ ���� ���
 
int main_matrix5(void) {
	int i,j;
	int tmp; // ���� ��ȯ ���� 
	int e[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	
	/*// 3x3 ����� �� ���ҿ� +1�� ���� ��� 
	DumpMat1(e);
	printf("\n");
	PlusMat(e);
	printf("\n");
	DumpMat1(e);
	printf("\n");
	
	// Practice 1) 3x3 ����� �� ���ҿ� ������ ���� ��� 
	DumpMat1(e);
	printf("\n");
	SquareMat(e);
	printf("\n");
	DumpMat1(e);
	printf("\n");
	
	// Practice 2) 3x3 ����� lower matrix�� ��� ���Ҹ� 0���� �ٲ㼭 ��� 
	DumpMat1(e);
	printf("\n");
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			if(i > j) {
				e[i][j] = 0;
			} 
			printf("%2d ", e[i][j]);
		}
		printf("\n");
	}*/
	
	// Practice 3) 3x3 ����� ��ġ����� ��� 
	DumpMat1(e); // 3x3 ��� ��� 
	printf("\n");
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			if(i>j) {
				tmp = e[i][j]; e[i][j]= e[j][i]; e[j][i]=tmp; 
			}
			printf("%2d ", e[i][j]); 
		}
		printf("\n");
	}
	
	
}

void PlusMat(int e[][3]) {
	int i,j;
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			e[i][j] += 1;
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}

void SquareMat(int e[][3]) {
	int i,j;
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			e[i][j] *= e[i][j];
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}
