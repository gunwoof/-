#include <stdio.h>

int main_2(void) {
	int i;
	int Sum=0;
	int Event[5]; 
	int min=1000;
	int mini =0;
	printf("5���� ���� ����� ���� �Է��Ͻÿ�!\n");
	scanf_s("%d %d %d %d %d", &Event[0], &Event[1], &Event[2], &Event[3], &Event[4]);
	
	 
	// �ּҰ� ���ϱ� 
	for(i=0; i<5 ; i++) {
		if(min > Event[i]) {
			min=Event[i];
			mini=i;
		}
	}
	
	// ����� ��� ���ϱ� 
	for(i=0; i<5 ; i++){
		if(mini < i && Event[mini] < Event[i]) {
			Sum += Event[i] - Event[mini];
		}
	}
	printf("��ҵ� ����� ���� %d",Sum);
	
	

}
