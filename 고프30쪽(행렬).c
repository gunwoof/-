#include <stdio.h>
 
void DumpMat1(int e[][3]); // 3x3 ����� ��� 
 
int main_matrix3(void) {
	int i,j;
	int Sum;
	int Sum1, Sum2, Sum3;
	int e[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	
	// ��Ŀ��� lower matrix�� ������ ���Ҵ� -ǥ���Ͽ� ��� 
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
	
	/*// ��Ŀ��� upper matrix�� ���� ��� 
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
	printf("upper matrix���հ�� %d",Sum);
	
	// upper matrix, lower matrix, diagonal�� ���� ���� ��� 
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
	printf("upper matrix���հ�� %d\n",Sum1);
	printf("lower matrix���հ�� %d\n",Sum2);
	printf("diagonal���հ�� %d\n",Sum3);*/
	
}
