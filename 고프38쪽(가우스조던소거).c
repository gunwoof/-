#include <stdio.h>
#define Len 4

void DunpEquation(double m[][Len], double v[]);

int main/*_gauss3*/(void) {
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	double v[Len] = {2,7,5,-1};
	
	// ���� 1�� �������� ��ķ� ����� ��� 
	DunpEquation(a, v);
}

void DunpEquation(double m[][Len], double v[]) {
	int i, j;
	
	for(i=0; i < Len; i++) {
		for(j=0; j < Len; j++) {
			printf("%5.1lf ", m[i][j]);
		}
		printf(" =%5.1lf \n", v[i]);
	}
}
