#include <stdio.h>
#define Len 4

void SubstRow(double m[][Len], int r1, int r2); // �� �࿡�� �ٸ� �� ����(�迭,�� ��, �ٸ� �� ��)
void MulRow(double m[][Len], int r, double b); // �� �࿡ �Ǽ���(�迭,��,�Ǽ���) 

int main_gauss1(void) {
	int i,j;
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	
	// ���콺 ���� �ҰŹ�(�� ����))�� �� ���� ��� 
	for(i=0;i<Len;i++) {
		MulRow(a,i,1.0/a[i][0]);
	} 
	for(i=1;i<Len;i++) {
		SubstRow(a,i,0);
	}
	
	for(i=0;i<Len;i++) {
		for(j=0;j<Len;j++) {
			printf("%5.1lf ", a[i][j]);
		}
		printf("\n");
	}
}

void SubstRow(double m[][Len], int r1, int r2) {
	int i;
	for(i=0; i<Len;i++) {
		m[r1][i] = m[r1][i] - m[r2][i];
	}
}

void MulRow(double m[][Len], int r, double b) {
	int i;
	for(i=0; i<Len;i++) {
		m[r][i] = b*m[r][i];
	}
}
