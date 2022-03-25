#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long decimalBinary(long n) {
	if (n >= 1)
		decimalBinary(floor(n / 2));
	printf("%ld", (n % 2));
	return 0;
}

int main(int argc, char **argv)
{
	long n;
	if (argc < 2) {
    	printf("too many arguments\n");
    	return 1;
	}
	n = strtol(argv[1], NULL, 10);
	decimalBinary(n);
	printf("\n");
	return 0;
}
