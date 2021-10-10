#include <stdio.h>
#define Len 4

void DunpEquation(double m[][Len], double v[]);
void SubstRow(double m[][Len], int r1, int r2); // 한 행에서 다른 행 빼기(배열,한 열, 다른 한 열)
void MulRow(double m[][Len], int r, double b); // 한 행에 실수배(배열,행,실수배)
void GaoussEli1(double m[][Len],int v[]); // 가우스 조던 소거법  

int main/*_gauss4*/(void) {
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	double b[Len] = {2,7,5,-1};
	
	// 연립 1차 방정식을 가우스 소거법을 사용하여 행 사다리꼴 만들어 출력 
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


