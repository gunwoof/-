#include <stdio.h>
#include <string.h> 

int main(void) {
	int i,j;
	
	char a[10];
	char b[10];
	
	gets(a);
	gets(b);
	
	
	if(strlen(a)<=strlen(b)) {
		for(i=0; i<strlen(a); i++){
			printf("%c%c",a[i],b[i]);
			
		}	
	}
	else if(strlen(a)>strlen(b)) {
		for(i=0; i<strlen(b); i++){
			printf("%c%c",a[i],b[i]);
		}
	}
}
