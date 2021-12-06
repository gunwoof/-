#include <stdio.h>
#include <math.h>

int IsPrime(int n) {
	int i;
	int b = (int) sqrt(n);
	for(i=2; i <=b; i++) {
		if(n % i == 0) 
			return 0;
	}
	return 1;
}

double square(double x, int y) {
	double s=1.0;
	int i;
	for(i=0; i< y; i++)
		s = s*x;
	return s;
}
