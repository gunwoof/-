#include <stdio.h>
#define N 3

static int cost[3][3] = {{26, 40, 83}, {49, 60, 57}, {13, 89, 99}}; //���� ��, ���� �� 

int min(int x, int y);


// ������ ���� ����, �ʷ�, �Ķ����� ĥ�ϴ� ����� �־����� �� ������ ������ ���� �޶���Ѵ�
// �ּ� ��� 
int rgb(int n/*��*/, int from/*������ ��*/); //�������� mm��� 

int main_recursion16(void) {
	
	// �������� mm��� 
	printf("%d\n", rgb(0,-1));
}

int rgb(int n, int from) {
	int i;
	int mm = 100000;
	if(n == N)
		return 0;
	for(i =0; i<N; i++) {
		if(i == from)
			continue;
		mm = min(mm, rgb(n+1, i)+cost[n][i]);
	}
	return mm;
	
} 
