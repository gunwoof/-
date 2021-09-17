#include <stdio.h>
#define Len 10

void DumpArray(int e[]);

int main_array3(void) {
	int i;
	int ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int count =0;
	
	// 변수 bound(=3)보다 큰 배열원소 출력 
	int bound =3;
	DumpArray(ele);
	for(i=0; i < Len; i++) {
		if(ele[i] > bound) {
			printf("%d ",ele[i]);
		}
	}
	
	/*// Practice 1) 변수 bound에 사용자 값을 넣고, bound보다 큰 배열원소 출력 
	int bound;
	scanf_s("%d", &bound); 
	DumpArray(ele);
	for(i=0; i < Len; i++) {
		if(ele[i] > bound) {
			printf("%d ",ele[i]);
		}
	}
	
	// Practice 2) 변수 bound(=3)보다 큰 배열원소를 카운트하여 출력 
	int bound =3;
	DumpArray(ele);
	for(i=0; i < Len; i++) {
		if(ele[i] > bound) {
			count++; 
		}
	}
	printf("%d",count);*/
}

void DumpArray(int e[]) {
	int i;
	for(i=0; i < Len; i++) {
		printf("%d ", e[i]);
	}
	printf("\n");
}
