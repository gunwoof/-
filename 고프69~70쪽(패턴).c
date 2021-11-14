#include <stdio.h>

typedef enum {State0, State1, State2, State3} State;

int main(void) {
	State state = State0;
	char str[30], *p;
	p = str;
	int count=0;
	
	gets(p);
	
	/*// a다음 bc가 연속으로 바로온 경우를 카운트 해서 출력 
	while(*p != 0 ) {
		switch(state) {
			case State0 : 
				switch(*p) {
					case 'a' : state = State1; break;
					default : break;					
				}
			break; 
			case State1 :
				switch(*p) {
					case 'a' : break;
					case 'b' : state = State2; break;
					default : state = State0; break;
				}
			break;
			case State2 : 
				switch(*p) {
					case 'a' : state = State1; break;
					case 'c' : state = State3; count++; break;
					default : state = State0; break;
				}
			break;
			case State3 :
				switch(*p) {
					case 'a' : state = State1; break;
					default : state = State0; break;
				}
			break;
			default : break;
		} 
		p++;		
	}
	printf("%d", count);*/
	
	// Practice 1) a(1개)b(0~무한)a(1개)의 개수를 구하여 출력 
	while(*p != 0 ) {
		switch(state) {
			case State0 : 
				switch(*p) {
					case 'a' : state = State1; break;
					default : state = State0; break;					
				}
			break; 
			case State1 :
				switch(*p) {
					case 'a' : state = State2; count++; break;
					case 'b' : state = State1; break;
					default : state = State0; break;
				}
			break;
			case State2 : 
				switch(*p) {
					case 'a' : state = State1; break;
					default : state = State0; break;
				}
			break;
			default : break;
		} 
		p++;		
	}
	printf("%d", count);
	
 
	
	
}
