#include <stdio.h>
#define Len 10

int main(void) {
	int i;
	int ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int bound =3;
	
	
	// index를 2, 3, 4, 5, 6, 7, 8, 9, 0, 1순서로 하여 배열원소 출력  
	for(i = 0; i < Len; i++) {
		printf("%d ", ele[i+2 % 10]);
	}
	
	// Practice 1) 
}


