#include <stdio.h>

/*미지수 x, y에 대해 ax+by=c, dx+ey = f와 같이 2원 1차 방정식에 있어서
a, b, c, d, e, f가 입력으로 주어진다. 이 연립 방정식의 해를 출력하시오.
답이 없으면 'impossible', 답이 무한이 많으면 'indeterminate'를 출력하시오

예1) 입력 1 1 1 2 2 2   	출력: infinite
예2) 입력 1 2 3 3 6 1   	출력: inconsistent
예3) 입력 2 3 5 -1 -1 -2      	출력: 1.0 1.0
예4) 입력 2 3 4 -2 -1 -2 	출력: 0.5 1.0*/

//첨가행렬의 값을 받는 로직 
//가우스조던소거법 
//im or inter 조건문 

void mulrow(double matrix[][3], int r /*행*/, double p/*1로만들 계수*/); // r번째 행의 첫번째를 1로 만들기 
void sumrow(double matrix[][3], int r1, int r2); // r2번째 행과 r1번째 행을 빼기 
void gaous(double matrix[][3]); //가우스 소거법(행 사다리 꼴) 

int main(void) {
	int i, j;
	double matrix[2][3];
	double value[2];
	
	// abcdef입력 
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
		// 행사다리꼴 만들기 
		gaous(matrix);
	
		// 해 구하기 
		value[0] = matrix[0][2] - matrix[0][1]*matrix[1][2];
		value[1] = matrix[1][2];
		
		//해를 출력 
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
		
