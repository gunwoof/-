#include <stdio.h>
#define Len 10

void DumpArray(int e[]);

int main_array3(void) {
	int i;
	int ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int count =0;
	
	// ���� bound(=3)���� ū �迭���� ��� 
	int bound =3;
	DumpArray(ele);
	for(i=0; i < Len; i++) {
		if(ele[i] > bound) {
			printf("%d ",ele[i]);
		}
	}
	
	/*// Practice 1) ���� bound�� ����� ���� �ְ�, bound���� ū �迭���� ��� 
	int bound;
	scanf_s("%d", &bound); 
	DumpArray(ele);
	for(i=0; i < Len; i++) {
		if(ele[i] > bound) {
			printf("%d ",ele[i]);
		}
	}
	
	// Practice 2) ���� bound(=3)���� ū �迭���Ҹ� ī��Ʈ�Ͽ� ��� 
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
