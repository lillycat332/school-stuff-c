#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long binaryDecimal(long b) {
	long d = 0, r = 0, count = 0;
	while (b) {
		d = b % 10;
		r = r + d * pow(2, count);
		b = floor(b/10);
		count++;
	}
	return r;
}

int main(int argc, char **argv)
{
	long n;
	char *temp;
	if (argc > 2) {
    	printf("Too many arguments\n");
    	return 1;
	}

	n = strtol(argv[1], &temp, 10);
	if (*temp != '\0') {
		printf("Invalid input\n"); return 1;
	}
	printf("%ld\n", binaryDecimal(n));
	return 0;
}