#include <stdio.h>
#define Len 4

void SubstRow(double m[][Len], int r1, int r2); // �� �࿡�� �ٸ� �� ����(�迭,�� ��, �ٸ� �� ��)
void MulRow(double m[][Len], int r, double b); // �� �࿡ �Ǽ���(�迭,��,�Ǽ���) 
void GaoussEli(double m[][Len]); //���콺 ���� �ҰŹ�(=~����)

int main_gauss2(void) {
	int i,j;
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	
	// ���� 1�� ������(=~����)�� ���콺 ���� �ҰŹ��� ����Ͽ� �� ��ٸ��� ����� ��� 
	GaoussEli(a);
	for(i=0;i<Len;i++) {
		for(j=0;j<Len;j++) {
			printf("%5.1lf ", a[i][j]);
		}
		printf("\n");
	}
}

void GaoussEli(double m[][Len]) {
	int i,j,k;
	for(i=0;i<Len;i++) {
		for(j=i; j<Len; j++) {
			MulRow(m,j,1.0/m[j][i]); // �� ĭ�� �з��� ���ϱ� ������ [j][i]�� 
		}
		for(j=i+1; j<Len; j++) {
			SubstRow(m,j,i);
		}
	}
}
