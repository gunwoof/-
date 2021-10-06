#include <stdio.h>
#define Len 3
 
void DumpMat1(int e[][3]); // 3x3 행렬을 출력 
void PlusMat(int a[][3],int b[][3],int c[][3]); // a행렬+ b행렬 =c행렬
 
int main_matrix6(void) {
	int i,j;
	int a[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	int b[3][3] = {{2,1,6},{3,1,3},{1,4,1}};
	int c[3][3];
	
	/*// a행렬+ b행렬 =c행렬을 출력 
	PlusMat(a,b,c);
	DumpMat1(a);
	printf("\n");
	DumpMat1(b);
	printf("\n");
	DumpMat1(c);
	
	// Practice 1) "c= a+a+b"로 계산하여 출력 
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			c[i][j] = 2*a[i][j] + b[i][j];
		}
	}
	DumpMat1(a);
	printf("\n");
	DumpMat1(b);
	printf("\n");
	DumpMat1(c);*/
	
	// Practice 2) b행렬-a행렬 =c행렬을 출력 
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			c[i][j] = b[i][j] - a[i][j];
		}
	}
	DumpMat1(b);
	printf("\n");
	DumpMat1(a);
	printf("\n");
	DumpMat1(c);
}

void PlusMat(int a[][3],int b[][3],int c[][3]) {
	int i,j;
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
