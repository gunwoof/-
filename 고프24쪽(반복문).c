#include <stdio.h>
#define Len 10

int main_loop1(void) {
	int i, j;
	
	// **********
	// **********
	// **********
	// **********
	// ********** 
	for(i=0; i < Len; i++) {
		for(j=0; j < Len; j++){
		printf("*");
		}
		printf("\n");
	}
	
	// * 
	// **
	// ***
	// ****
	// *****
	// ******
	// *******
	// ********
	// *********
	// **********
	for(i=0; i < Len; i++) {
		for(j=0; j < i+1; j++){
		printf("*");
		}
		printf("\n");
	}
	
	// Prcatice 1) 
	//          *
	//          *
	//          *
	//          *
	//          *
	//          *
	//          *
	//          *
	//          *
	//          *  
	for(i=0; i < Len; i++) {
		for(j=0; j < Len; j++){
		printf(" ");
		}
		printf("*\n");
	}
	
	// Prcatice 2)  
	//*
	// *
	//  *
	//   *          
	//    *      
	//     *     
	//      *    
	//       *   
	//        *  
	//         * 
	for(i=0; i < Len; i++) {
		for(j=0; j < i; j++){
		printf(" ");
		}
		printf("*\n");
	}
}
