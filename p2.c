#include <stdio.h>

int main_1(void) {
	int i;
	int Sum=0;
	int Event[5]; 
	printf("�ټ� ��°��->ù ��°�� ������ 5���� ����� ���� �Է��Ͻÿ�!\n");
	scanf_s("%d %d %d %d %d", &Event[0], &Event[1], &Event[2], &Event[3], &Event[4]);
	
	for(i=0; i<4 ; i++) {
		Sum += Event[i+1] - Event[0];
		if(Event[i] > Event[i+1]) {
			printf("����� ���� ���� ���� Ů�ϴ�.\n");
		}
	}
	printf("��ҵ� ����� ���� %d",Sum);
	

}
