#include <stdio.h>
#define Len 4

void DunpEquation(double m[][Len], double v[]); // ���� 1�� ������(=~����)�� ��ķ� ����� ���
void SubstRow(double m[][Len], int r1, int r2); // �� �࿡�� �ٸ� �� ����(�迭,�� ��, �ٸ� �� ��)
void MulRow(double m[][Len], int r, double b); // �� �࿡ �Ǽ���(�迭,��,�Ǽ���)
void GaoussEli1(double m[][Len],double v[]); // ���콺 ���� �ҰŹ�  

int main_gauss4(void) {
	int i,j;
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	double b[Len] = {2,7,5,-1};
	double x[Len] = {0,0,0,0}; // ���� �������� ��  
	
	// ���� 1�� �������� ���콺 �ҰŹ��� ����Ͽ� �� ��ٸ��� ����� ��� 
	DunpEquation(a,b);
	printf("\n");
	GaoussEli1(a, b);
	DunpEquation(a,b);
	
	// ���� 1�� �������� �ظ� ���Ͽ� ��� 
	for(i=Len-1; i>=0 ; i--) {
		double p =0; // �ݺ������� �ʱ�ȭ ��������� 
		for(j=i+1; j < Len; j++) {
			p = p + a[i][j]*x[j];
		}
		x[i] = b[i] - p;
	}
	for(i=0; i< 4; i++) {
		printf("x%d = %.1lf\n",i, x[i]);
	}
	
	
}
void GaoussEli1(double m[][Len],double v[]) {
	int i,j;
	for(i=0;i<Len;i++) {
		for(j=i; j<Len; j++) {
			v[j] = 1.0/m[j][i]*v[j];
			MulRow(m,j,1.0/m[j][i]);
		}
		for(j=i+1; j<Len; j++) {
			v[j] = v[j] - v[i];
			SubstRow(m,j,i);
			
		}
	}
}


