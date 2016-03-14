#include <stdio.h>

int power(int m, int n);

// test power function
main()
{
	int i, base, pow;
	printf("Please enter the base: ");
	scanf("%d", &base);
	printf("Please enter the exponent: ");
	scanf("%d", &pow);	

		printf("%d\n", power(base, pow));
		
	return 0;
}

// power: raise base to n-th power: n >= 0
int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 0; i < n; ++i)
		p = p * base;
	return p;
}
