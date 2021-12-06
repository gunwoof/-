#include <stdio.h>



int IsPrime(int n);
double square(double x, int y);

int main(int argc, char** argv) {
	int u;
	for( u=2; u <10; u++) {
		printf("%d %d\n", u, IsPrime(u));
	}
	printf("%f\n", square(3.3, 3));
}
