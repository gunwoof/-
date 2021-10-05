#include <stdio.h>
#define Len 3
 
void DumpMat1(int e[][3]); // 3x3 ����� ��� 
void DumpMat3(int e[][5]); // 5x5 ����� ��� 
 
int main_matrix4(void) {
	int i,j;
	int Sum =0;
	int e[Len][Len] = {{1,2,1},{0,2,3},{1,1,1}};
	int a[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	
	/*// ��Ŀ��� /(diagonal) ���� �� ��� 
	DumpMat1(e);
	for(i=0; i<Len; i++) {
		for(j=0; j < Len; j++) {
			if(i+j == Len-1) {
				Sum += e[i][j];
			}
		}
	}
	printf("/(diagonal)�� �հ��%d", Sum);	*/
	
	// Practice 1) 5x5 ��Ŀ��� \\\(diagonal)�� �հ� ///(diagonal)�� ���� ��� 
	DumpMat3(a);
	for(i=0; i< 5; i++) {
		for(j=0; j < 5; j++) {
			if(-2<i-j && i-j<2) {
				Sum += a[i][j];
			}
		}
	}
	printf("(diagonal)�� �հ��%d\n", Sum);
	
	Sum = 0;
	for(i=0; i< 5; i++) {
		for(j=0; j < 5; j++) {
			if(3<i+j && i+j<5) {
				Sum += a[i][j];
			}
		}
	}
	printf("(diagonal)�� �հ��%d", Sum);		
	
	
}

void DumpMat3(int e[][5]) {
	int i,j;
	for(i=0; i<5; i++) {
		for(j=0; j < 5; j++) {
			printf("%2d ",e[i][j]);
		}
		printf("\n");
	}
}
