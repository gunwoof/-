#include <stdio.h>
#define Len 4

void SubstRow(double m[][Len], int r1, int r2); // 한 행에서 다른 행 빼기(배열,한 열, 다른 한 열)
void MulRow(double m[][Len], int r, double b); // 한 행에 실수배(배열,행,실수배) 
void GaoussEli(double m[][Len]); //가우스 조던 소거법(=~제외)

int main_gauss2(void) {
	int i,j;
	double a[Len][Len] = {{2,1,2,0},{1,1,-1,1},{5,-1,1,1},{1,0,5,1}};
	
	// 연립 1차 방정식(=~제외)을 가우스 조던 소거법을 사용하여 행 사다리꼴 만들어 출력 
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
			MulRow(m,j,1.0/m[j][i]); // 한 칸씩 밀려서 곱하기 때문에 [j][i]임 
		}
		for(j=i+1; j<Len; j++) {
			SubstRow(m,j,i);
		}
	}
}
