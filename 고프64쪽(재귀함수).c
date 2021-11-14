#include <stdio.h>
#define Num 4

int gMax=1000000;
int cost[4][4] ={{1, 4, 5, 2}, {2,1,3,5}, {5, 2, 3, 10}, {3, 2, 1, 2}};
					
void DumpShort(int b[],int len); // 최소비용 
void swap(int *a, int *b);
void permForShort(int a[], int d, int len); // 최소 소비비용 출력 

int main_recursion8(void) {
	int i;
	int arr[Num];
	for(i=0; i<Num; i++) {
		arr[i]=i;
	}
	
	// 최소 소비비용 출력 
	permForShort(arr,0,Num);
	printf("%d", gMax);
	
}

// 최소 소비비용 출력 
void DumpShort(int a[],int len) {
	int i;
	int n;
	int sum=0;
	
	for(i=0; i <len;i++) {
		n = (i+1) % len;
		sum += cost[a[i]][a[n]];
	}
	if(sum < gMax) {
		gMax = sum;
	}
}

void permForShort(int a[], int d, int len) {
	int i;
	if(d == len-1) {
		DumpShort(a,len);
		return;
	}
	for(i=d; i<len; i++) {
		swap(&(a[d]), &(a[i]));
		permForShort(a,d+1,len);
		swap(&(a[d]), &(a[i]));
	}
}
