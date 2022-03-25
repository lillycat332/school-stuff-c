#include <stdio.h>
#include <math.h>
#include <stdlib.h>\n
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
	decimalBinary(n);
	printf("\n");
	return 0;
}
