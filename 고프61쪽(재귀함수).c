#include <stdio.h>
#define Num 5

void Dump(int b[],int len); // �迭�� ������� ���
void swap(int *a, int *b);
void permCheck(int a[], int d, int len); // 5�ڸ��� �������� ¦���� �����ϴ� ������ ���
int CheckConstraint(int a[]);

int main_recursion6(void) {
	int i;
	int arr[Num];
	for(i=0; i<Num; i++) {
		arr[i]=i;
	}
	
	// 5�ڸ��� �������� ¦���� �����ϴ� ������ ���
	permCheck(arr, 0, Num);
	
}


void permCheck(int a[], int d, int len) {
	int i;
	if(d==len-1) {
		Dump(a, Num);
		return;
	}
	for(i=d; i <len; i++) {
		swap(&(a[d]), &(a[i]));
		if(! CheckConstraint(a)) {
			permCheck(a, d+1, len);
		}
		swap(&(a[d]), &(a[i]));
	}
}

int CheckConstraint(int a[]) {
	if((a[0] % 2) != 0) {
		return 1;
	}
	else return 0;
}
