#include <stdio.h>
#define N 6

int A[N] = {10, 20, 10, 30, 20, 50};

int max(int x, int y);

// �����ϴ� ���� �κ� ������ ���� 
int Lis(int n/*�ڸ� ��ȣ*/, int m/*�ٷ� ���� �ڸ� ��ȣ*/);

int mainmain_recursion18(void) {
	printf("%d\n", Lis(0, -1));
}

int Lis(int n, int m) {
	int mm = -1;
	if(n == N)
		return 0;
	if(m == -1) {
		mm = max(mm, Lis(n+1, -1));
		mm = max(mm, Lis(n+1, n)+1);
	}
	else {
		mm = max(mm, Lis(n+1, m));
		if(A[n]>A[m])
			mm = max(mm, Lis(n+1, n)+1);
	}
	return mm;
} 
