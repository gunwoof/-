#include <stdio.h>
#define Num 5

int count;

void Dump(int b[],int len); // �迭�� ������� ���
void swap(int *a, int *b);
int CheckThree(int a[], int d);
void permCheck1(int a[], int d, int len); // 5�ڸ��� �������� ó�� 3���� ������ ���� 15���� �������� ��� 


int main_recursion7(void) {
	int i;
	int arr[Num];
	for(i=0; i<Num; i++) {
		arr[i]=i;
	}
	
	// 5�ڸ��� �������� ó�� 3���� ������ ���� 15���� �������� ��� 
	permCheck1(arr, 0, Num);
	
	// Practice 1) permCheck�� ��� Ƚ���� ��� 
	printf("%d", count); 
}

int CheckThree(int a[], int d) {
	int i;
	int sum =0;
	if(d<2) {
		return 0;
	}
	for(i=0;  i < 3; i++) {
		sum += a[i];
	}
	if(sum > 15) {
		return 1;
	}
	else return 0;
}

void permCheck1(int a[], int d, int len) {
	count++;
	int i;
	if(d==len-1) {
		Dump(a, Num);
		return;
	}
	for(i=d; i <len; i++) {
		swap(&(a[d]), &(a[i]));
		if(! CheckThree(a, d)) {
			permCheck1(a, d+1, len);
		}
		swap(&(a[d]), &(a[i]));
	}
}
