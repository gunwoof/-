#include <stdio.h>

void hanoi(char from, char mid, char to, int n); 

int count=0;

int main(void) {
	int n;
	scanf_s("%d",&n);
	hanoi('A','B','c',n);
}

void hanoi(char from, char mid, char to, int n) {
	if(n == 1) {
		count++;
		if(count==10) {
			printf("move from %c to %c\n", from, to);
			return;
		}
	} 
	else {
		hanoi(from, to, mid, n-1);
		hanoi(from, mid, to, 1);
		hanoi(mid, from, to, n-1);
		return;
	}	
}


