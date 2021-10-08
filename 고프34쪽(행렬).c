#include <stdio.h>
#define Len 3
 
void DumpMat1(int e[][3]); // 3x3 ����� ��� 
int LowCol(int a[][3],int b[][3],int i,int j); // �� ��* �� ���� ��� 
void MulAmt(int a[][3],int b[][3],int c[][3]); // a���*b���=c����� ��� 
 
int main/*_matrix7*/(void) {
	int i,j;
	int a[3][3] = {{1,2,1},{0,2,3},{1,1,1}};
	int b[3][3] = {{2,1,6},{3,1,3},{1,4,1}};
	int c[3][3];
	
	/*// �� ��* �� ���� ���
	DumpMat1(a);
	printf("\n"); 
	DumpMat1(b); 
	printf("\n");
	scanf_s("%d %d", &i,&j);
	printf("i��� j���� ���� %d",LowCol(a,b,i,j));*/
	
	// a���*b���=c��� �� ��� 
	DumpMat1(a);
	printf("\n"); 
	DumpMat1(b); 
	printf("\n");
	MulAmt(a,b,c);
}

int LowCol(int a[][3],int b[][3],int i,int j) {
	int k;
	int Sum;
	
	for(k=0; k< 3; k++) {
		Sum += a[i][k]*b[k][j];
	}
	return Sum;
}

void MulAmt(int a[][3],int b[][3],int c[][3]) {
	int i,j,k;
	int Sum=0;
	
	for(i=0; i< Len; i++) {
		for(j=0; j < Len; j++) {
			for(k=0;k < Len;k++){
				Sum += a[i][k]*b[k][j];	
			}
		c[i][j] = Sum;
		printf("%2d ", c[i][j]);
		Sum =0;
		
		}
	printf("\n");
	}
	 
}
