#include <stdio.h>

typedef enum {State0, State1, State2, State3} State;

int main_pattern2(void) {
	State state = State0;
	char str[30], *p;
	p = str;
	int count=0;
	int idx=0; // Prcatice3���� index���� 
	int start=0; // Prcatice3���� a�� ������ �� 
	
	gets(p);
	
	/*// a���� bc�� �������� �ٷο� ��츦 ī��Ʈ �ؼ� ��� 
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
	printf("%d", count);
	
	// Practice 1) a(1��)b(0~����)a(1��)�� ������ ���Ͽ� ��� 
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
	printf("%d", count);*/
	
	// Practice 2) a(1��)b(0~����)a(1��)�� ���Ͽ��� ������ �����ϴ� ���� index�� ���Ͽ� ��� 
	while(*p != 0 ) {
		switch(state) {
			case State0 : 
				switch(*p) {
					case 'a' : state = State1; start = idx; break;
					default : state = State0; break;					
				}
			break; 
			case State1 :
				switch(*p) {
					case 'a' : state = State2; printf("%d", start); break;
					case 'b' : state = State1; break;
					default : state = State0; break;
				}
			break;
			case State2 : 
				switch(*p) {
					case 'a' : state = State1; start = idx; break;
					default : state = State0; break;
				}
			break;
			default : break;
		} 
		p++;
		idx++;		
	}

	
 
	
	
}
