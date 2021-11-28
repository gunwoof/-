#include <stdio.h>

/*������ x, y�� ���� ax+by=c, dx+ey = f�� ���� 2�� 1�� �����Ŀ� �־
a, b, c, d, e, f�� �Է����� �־�����. �� ���� �������� �ظ� ����Ͻÿ�.
���� ������ 'impossible', ���� ������ ������ 'indeterminate'�� ����Ͻÿ�

��1) �Է� 1 1 1 2 2 2   	���: infinite
��2) �Է� 1 2 3 3 6 1   	���: inconsistent
��3) �Է� 2 3 5 -1 -1 -2      	���: 1.0 1.0
��4) �Է� 2 3 4 -2 -1 -2 	���: 0.5 1.0*/

//÷������� ���� �޴� ���� 
//���콺�����ҰŹ� 
//im or inter ���ǹ� 

void mulrow(double matrix[][3], int r /*��*/, double p/*1�θ��� ���*/); // r��° ���� ù��°�� 1�� ����� 
void sumrow(double matrix[][3], int r1, int r2); // r2��° ��� r1��° ���� ���� 
void gaous(double matrix[][3]); //���콺 �ҰŹ�(�� ��ٸ� ��) 

int main(void) {
	int i, j;
	double matrix[2][3];
	double value[2];
	
	// abcdef�Է� 
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			scanf_s("%lf", &matrix[i][j]);
		}
	}	
	
	if(matrix[0][1]*matrix[1][0] == matrix[0][0]*matrix[1][1] && matrix[1][1]*matrix[0][2] == matrix[0][1]*matrix[1][2])
		printf("indeterminate");
	else if(matrix[0][1]*matrix[1][0] == matrix[0][0]*matrix[1][1] && matrix[1][1]*matrix[0][2] != matrix[0][1]*matrix[1][2])
		printf("impossible");
	else {
		// ���ٸ��� ����� 
		gaous(matrix);
	
		// �� ���ϱ� 
		value[0] = matrix[0][2] - matrix[0][1]*matrix[1][2];
		value[1] = matrix[1][2];
		
		//�ظ� ��� 
		for(i=0; i <2 ;i++)
		printf(" %f ",value[i]);
	}
	
}

void mulrow(double matrix[][3], int r, double p) {
	int i;
	for(i=0; i<3; i++) {
			matrix[r][i] = matrix[r][i]*p;
		}
	}
	
void sumrow(double matrix[][3], int r1, int r2) {
	int i;
	for(i=0; i<3; i++) {
			matrix[r2][i] = matrix[r2][i]-matrix[r1][i];
		}
	}
	
void gaous(double matrix[][3]) {
	int i, j;
	for(i=0; i<2; i++) {
		for(j=i; j<3; j++)
			mulrow(matrix, j, 1.0/matrix[j][i]);
		for(j=i+1; j<3; j++)
			sumrow(matrix, 0, j);	
	}
	 
}
		
