#include <stdio.h>
#include <string.h> 

int main(void) {
	int i,j;
	int n=0;
	int a[n];
	int rest5=0;
	int rest1=0;
	int rest2=0;
	int rest3=0;
	int rest4=0;
	
	
	scanf_s("%d",&n);
	for(i=0;i<n;i++) {
		scanf_s("%d",&a[i]);
		if(a[i] % 5 == 0) {
			rest5++;
		}
		else if(a[i] % 5 == 1){
			rest1++;
		}
		else if(a[i] % 5 == 2){
			rest2++;
		}
		else if(a[i] % 5 == 3){
			rest3++;
		}
		else if(a[i] % 5 == 4){
			rest4++;
		}
			
	}
	
	printf("\n%d %d %d %d %d", rest5, rest1, rest2, rest3, rest4);
	
		
}
	

