#include <stdio.h>
 
void DumpMat1(int e[][3]); // 3x3 행렬을 출력 
 
int main_matrix1(void) {
	int a[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	int Sum; 
	// 3x3 행렬 출력 
	DumpMat1(a);
	printf("\n");
	
	// Practice 1) 행렬의 모든 원소를 더하여 출력 
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			Sum += a[i][j];
		}
	}
	printf("합계는 %d\n", Sum);
	
	// Practice 2) 행렬의 원소 중 가장 큰 원소를 출력 
	int max = -100;
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			if(max < a[i][j]) {
				max = a[i][j];
			}
		}
	}
	printf("가장 큰 숫자는 %d", max);
	 
}

void DumpMat1(int e[][3]) {
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}
