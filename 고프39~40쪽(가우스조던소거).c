#include <stdio.h>
#define Len 4

void DunpEquation(double m[][Len], double v[]); // 연립 1차 방정식(=~포함)을 행렬로 만들어 출력
void SubstRow(double m[][Len], int r1, int r2); // 한 행에서 다른 행 빼기(배열,한 열, 다른 한 열)
void MulRow(double m[][Len], int r, double b); // 한 행에 실수배(배열,행,실수배)
void GaoussEli1(double m[][Len],double v[]); // 가우스 조던 소거법  

int main_gauss4(void) {
	int i,j;
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	double b[Len] = {2,7,5,-1};
	double x[Len] = {0,0,0,0}; // 연립 방정식의 해  
	
	// 연립 1차 방정식을 가우스 소거법을 사용하여 행 사다리꼴 만들어 출력 
	DunpEquation(a,b);
	printf("\n");
	GaoussEli1(a, b);
	DunpEquation(a,b);
	
	// 연립 1차 방정식의 해를 구하여 출력 
	for(i=Len-1; i>=0 ; i--) {
		double p =0; // 반복적으로 초기화 시켜줘야함 
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


