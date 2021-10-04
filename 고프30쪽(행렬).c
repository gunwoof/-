#include <stdio.h>
 
void DumpMat1(int e[][3]); // 3x3 행렬을 출력 
 
int main_matrix3(void) {
	int i,j;
	int Sum;
	int Sum1, Sum2, Sum3;
	int e[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	
	// 행렬에서 lower matrix를 제외한 원소는 -표시하여 출력 
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			if(i > j) {
				printf("%2d", e[i][j]);
			}
			else {
				printf(" -");
			}
		}
		printf("\n");
	}
	
	/*// 행렬에서 upper matrix의 합을 출력 
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			if(i < j) {
				printf("%2d", e[i][j]);
				Sum += e[i][j];
			}
			else {
				printf(" -");
			}
		}
		printf("\n");
	}
	printf("upper matrix의합계는 %d",Sum);
	
	// upper matrix, lower matrix, diagonal의 각각 합을 출력 
	DumpMat1(e);
	for(i=0; i<3; i++) {
		for(j=0; j < 3; j++) {
			if(i < j) {
				Sum1 += e[i][j];
			}
			else if(i > j){
				Sum2 += e[i][j];
			}
			else {
				Sum3 += e[i][j];
			}
		}
	}
	printf("upper matrix의합계는 %d\n",Sum1);
	printf("lower matrix의합계는 %d\n",Sum2);
	printf("diagonal의합계는 %d\n",Sum3);*/
	
}
