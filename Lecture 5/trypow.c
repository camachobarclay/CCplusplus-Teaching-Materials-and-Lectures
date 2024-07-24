#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int n = 10;

	// compute 2^n = 2^10

	int threetotheN = pow(3,n);

	printf("The value of 3^10 = %i.\n", threetotheN);
	printf("The value of pi^10 = %f.\n", pow(3.14,10.0));

	return 0;

}