#include <stdio.h>
#define Len 10

int main(void) {
	int i, j, k;
	
	//
	// *
	// **
	// ***
	// ****
	// *****
	// ******
	// *******
	// ********
	// ********* 
	// �ﰢ������ ���� x5
	for(i=0; i < 5; i++) {
		for(j=0; j < Len; j++) {
			for(k=0; k < j; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
	
	// Prcatice 1)
	// 
	// *
	//
	// *
	// **
	// 
	// *
	// **
	// ***
	//   �ﰢ������ ���� x5(��� Ŀ��)
	for(i=0; i < 5; i++) {
		for(j=0; j < i + 2; j++) {
			for(k=0; k < j; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
}
