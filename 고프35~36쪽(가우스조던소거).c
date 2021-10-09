#include <stdio.h>
#define Len 4

void SubstRow(double m[][Len], int r1, int r2); // 한 행에서 다른 행 빼기(배열,한 열, 다른 한 열)
void MulRow(double m[][Len], int r, double b); // 한 행에 실수배(배열,행,실수배) 

int main_gauss1(void) {
	int i,j;
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	
	// 가우스 조던 소거법(한 열만))을 한 것을 출력 
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
