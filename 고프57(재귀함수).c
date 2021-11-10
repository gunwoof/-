#include <stdio.h>

void Dump(int b[],int len);
void traverse(int loc, int end, int b[]);

int main_recursion4(void) {
	int bin[5];
	
	// on-off space
	traverse(0,5,bin);
} 

void Dump(int b[],int len) {
	int i;
	for(i=0;i<len;i++) {
		printf("%d", b[i]);
	}
	printf("\n");
	return;
}

void traverse(int loc, int end, int b[]) {
	if(loc == end) {
		Dump(b,end);
		return;
	}
	else {
		b[loc] =0; 
		traverse(loc+1,end,b);
		b[loc] =1;
		traverse(loc+1,end,b);
		return;
	}
	return;
}
