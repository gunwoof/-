#include <stdio.h>
#define Len 10

int main_loop2(void) {
	int i, j;
	
	// **********
	//  *********
	//   ********
	//    *******
	//     ******
	//      *****
	//       ****
	//        ***
	//         **
	//          *
	for(i=0;i<Len;i++) {
		for(j=0; j < i; j++) {
			printf(" ");
		}
		for(j=0; j < Len - i;j++) {
			printf("*");
		}
		printf("\n");
	}
	
	// Practice 1)
	//          *     
	//         ***
	//        *****
	//       *******
	// 	    *********
	//	   ***********
	//    *************
	//   ***************
	//  *****************
	// *******************
	for(i=0; i < Len; i++) {
		for(j=0; j < Len -i ; j++) {
			printf(" ");
		}
		for(j=0; j < 2*i-1 ; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	// Practice 3)
}

