#include <stdio.h>

typedef enum{State0,State1,State2,State3} State;

int main/*_pattern1*/(void) {
	char str[30];
	char *p;
	State state= State0;
	
	gets(str);
	p=str;
	
	while(*p !=0)  {
		switch(state) {
			case State0 :
				switch(*p) {
					case 'a': state = State1; break;
					default : state = State0; break;
				} break;
			case State1 :
				switch(*p) {
					case 'b' : printf("included\n"); return;
					case 'a' : state = State1; break;
					default : state = State0; break;
				} break;			
		}
		p++;
	}
}
