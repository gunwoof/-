#include <stdio.h>

void hanoi(char from, char mid, char to, int n); // 하노이 타워(3이상)
void hanoix(char from, char mid, char to, int n); // 하노이 타워(3이상)


int main_recursion3(void) {
	
	// 하노이 타워 출력 
	hanoi('A','B','c',3);
	
	// 'A'로부터 출발한 움직을을 새서 출력
	
	// n=5, 'A'에 3개의 폴대를 가질때의 장면을 새서 출력 
	hanoix('A','B','C',5);
	  
	
}

void hanoi(char from, char mid, char to, int n) {
	if(n == 1) {
		printf("move from %c to %c\n", from, to);
		return;
	} 
	else {
		hanoi(from, to, mid, n-1);
		hanoi(from, mid, to, 1);
		hanoi(mid, from, to, n-1);
		return;
	}
}

void hanoix(char from, char mid, char to, int n) {
	int count[3] = {5,0,0};
	if(n == 1) {
		
		printf("move from %c to %c\n", from, to);
		return;
	} 
	else {
		hanoi(from, to, mid, n-1);
		hanoi(from, mid, to, 1);
		hanoi(mid, from, to, n-1);
		return;
	}
}
