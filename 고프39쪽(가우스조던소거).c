#include <stdio.h>
#define Len 4

void DunpEquation(double m[][Len], double v[]);
void SubstRow(double m[][Len], int r1, int r2); // �� �࿡�� �ٸ� �� ����(�迭,�� ��, �ٸ� �� ��)
void MulRow(double m[][Len], int r, double b); // �� �࿡ �Ǽ���(�迭,��,�Ǽ���)
void GaoussEli1(double m[][Len],int v[]); // ���콺 ���� �ҰŹ�  

int main/*_gauss4*/(void) {
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	double b[Len] = {2,7,5,-1};
	
	// ���� 1�� �������� ���콺 �ҰŹ��� ����Ͽ� �� ��ٸ��� ����� ��� 
	DunpEquation(a,b);
	printf("\n");
	GaoussEli1(a, b);
	
	
}
void GaoussEli1(double m[][Len],int v[]) {
	int i,j;
	for(i=0;i<Len;i++) {
		for(j=i; j<Len; j++) {
			v[i] = 1.0/m[j][i]*v[i];
			MulRow(m,j,1.0/m[j][i]);
		}
		for(j=i+1; j<Len; j++) {
			v[i] = v[j] - v[i];
			SubstRow(m,j,i);
			
		}
	}
}


