#include <stdio.h>
#define Num 5

int count;

void Dump(int b[],int len); // �迭�� ������� ���
void swap(int *a, int *b);
void permutation(int a[], int d, int len); // 5�ڸ��� ���� ���
void Dump1(int b[],int len);
void CountPerm(int a[], int d, int len); // 5�ڸ��� �������� ����� ���� ������ ���� ���
void Dump2(int a[], int len);  
void perm4(int a[], int d, int len); // 5�ڸ��� �������� ���� �� �ڸ� ���� ���� 4���� ū�͸� ��� 
void Dump3(int a[],int len);
void EvennumPerm(int a[], int d, int len); // 5�ڸ��� �������� ¦���� �����ϴ� ������ ���

int main(void) {
	int i;
	int arr[Num];
	for(i=0; i<Num; i++) {
		arr[i]=i;
	}
	
	// 5�ڸ��� ���� ��� 
	permutation(arr,0,Num);
	
	/*// Practice 1) 5�ڸ��� �������� ����� ���� ������ ���� ��� 
	CountPerm(arr,0,Num);
	printf("%d", count);
	
	// Practice 2) 5�ڸ��� �������� ���� �� �ڸ� ���� ���� 4���� ū�͸� ��� 
	perm4(arr,0,Num);
	
	// Practice 3) 5�ڸ��� �������� ¦���� �����ϴ� ������ ���
	EvennumPerm(arr,0,Num);*/
	 
}

void swap(int *a, int *b) {
	int tmp;
	tmp = *a; *a = *b; *b = tmp;
	return;
}

void permutation(int a[], int d, int len) {
	int i;
	if(d==len-1) {
		Dump(a, Num);
		return;
	}
	for(i=d; i <len; i++) {
		swap(&(a[d]), &(a[i]));
		permutation(a, d+1, len);
		swap(&(a[d]), &(a[i]));
	}
}

void Dump1(int b[],int len) {
	int i;
	count++;
	for(i=0;i<len;i++) {
		printf("%d", b[i]);
	}
	printf("\n");
	return;
}

void CountPerm(int a[], int d, int len) {
	int i;
	if(d==len-1) {
		Dump1(a, Num);
		return;
	}
	for(i=d; i <len; i++) {
		swap(&(a[d]), &(a[i]));
		CountPerm(a, d+1, len);
		swap(&(a[d]), &(a[i]));
	}
}

void Dump4(int a[],int len) {
	int i;
	if((a[3]+a[4]) > 4) {
		for(i=0;i<len;i++) {
		printf("%d", a[i]);
		}
	}
	else return; // return�� ����� ����� ���Ⱑ �ȵ� 
	printf("\n");
	return;
}
	
void perm4(int a[], int d, int len) {
	int i;
	if(d==len-1) {
		Dump4(a, Num); 
		return;	
	}
	for(i=d; i <len; i++) {
		swap(&(a[d]), &(a[i]));
		perm4(a, d+1, len);
		swap(&(a[d]), &(a[i]));
	}
}

void Dump3(int a[],int len) {
	int i;
	if(a[0] % 2 == 0) {
		for(i=0;i<len;i++) {
		printf("%d", a[i]);
		}
	}
	else return; // return�� ����� ����� ���Ⱑ �ȵ� 
	printf("\n");
	return;
}

void EvennumPerm(int a[], int d, int len) {
	int i;
	if(d==len-1) {
		Dump3(a, Num); 
		return;	
	}
	for(i=d; i <len; i++) {
		swap(&(a[d]), &(a[i]));
		EvennumPerm(a, d+1, len);
		swap(&(a[d]), &(a[i]));
	}
}
