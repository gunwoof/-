#include <stdio.h>
#include <string.h>

/*N�� N���� ���ڵ��� �־�����. ���ڵ��� ¦�� ���� �ڸ����� ������
�� �̵���Ͽ� ���ʰ� ������ �κ����� ������ �� �κ��� �ڸ����� ���� ���Ѵ�.
���� ��� 123402�� ��� ���� �κ��� ���� 1+2+3�̸� ������ �κ��� ����
4+0+2 �̴�.
N���� ���� �� ���ʺκ��� ���� �հ� ������ �κ��� ���� ���� ����
������ ������ ����Ͻÿ� (�Ҽ� 2° �ڸ����� ���:  %.2lf�θ� ����ϸ� ��)
��1) �Է�: 3 123402 2244 1001   ���: 0.67
��2) �Է�: 2 11112020 3011       ���: 0.5*/

// n���� ���ڸ� �޴� ����
// ����� ���ϴ� ����
// ������ ���� ������ ���ϴ� ���� 

int main(void) {
	int i,j;
	int N;
	char Number[100]; // ���ڸ� ���ڿ��� �ޱ� 
	int bNumber=0, aNumber=0; // �� ����/�� ���� 
	int count=0; // �� ���ڿ� �� ���ڰ� ���� ���� 
	double rate=0;
	
	
	scanf_s("%d", &N);
	for(i=0; i<N; i++) {
		bNumber=0;
		aNumber=0;
		scanf_s("%s", Number);
		for(j=0; j<strlen(Number)/2; j++)
			bNumber += Number[j];
		for(j=strlen(Number)/2; j<strlen(Number); j++)
			aNumber += Number[j];
		if(bNumber==aNumber)
			count++;
	}
	rate = (double)count/N;
	printf("%.2f", rate);
	
	
	
	
}
