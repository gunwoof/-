#include <stdio.h>
#define Len 3
 
void DumpMat1(int e[][3]); // 3x3 행렬을 출력 
void PlusMat(int e[][3]); // 3x3 행렬의 각 원소에 +1한 것을 출력 
void SquareMat(int e[][3]); // 3x3 행렬의 각 원소에 제곱한 것을 출력
 
int main_matrix5(void) {
	int i,j;
	int tmp; // 원소 교환 변수 
	int e[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	
	/*// 3x3 행렬의 각 원소에 +1한 것을 출력 
	DumpMat1(e);
	printf("\n");
	PlusMat(e);
	printf("\n");
	DumpMat1(e);
	printf("\n");
	
	// Practice 1) 3x3 행렬의 각 원소에 제곱한 것을 출력 
	DumpMat1(e);
	printf("\n");
	SquareMat(e);
	printf("\n");
	DumpMat1(e);
	printf("\n");
	
	// Practice 2) 3x3 행렬의 lower matrix의 모든 원소를 0으로 바꿔서 출력 
	DumpMat1(e);
	printf("\n");
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			if(i > j) {
				e[i][j] = 0;
			} 
			printf("%2d ", e[i][j]);
		}
		printf("\n");
	}*/
	
	// Practice 3) 3x3 행렬의 전치행렬을 출력 
	DumpMat1(e); // 3x3 행렬 출력 
	printf("\n");
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			if(i>j) {
				tmp = e[i][j]; e[i][j]= e[j][i]; e[j][i]=tmp; 
			}
			printf("%2d ", e[i][j]); 
		}
		printf("\n");
	}
	
	
}

void PlusMat(int e[][3]) {
	int i,j;
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			e[i][j] += 1;
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}

void SquareMat(int e[][3]) {
	int i,j;
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			e[i][j] *= e[i][j];
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}
