#include <stdio.h>

main()
{

	float fA, fB, fX, fY;

	fA = 5;
	fB = 1;
	fX = 10;
	fY = 5;

	printf("Enter the values for the formula 'f = (a - b)(x - y)\nEnter first value(a): ");
	scanf("%f", &fA);
	printf("Enter second value(b): ");
	scanf("%f", &fB);
	printf("Enter third value(x): ");
	scanf("%f", &fX);
	printf("Enter fourth value(y): ");
	scanf("%f", &fY);
	printf("The result of the formula f = (a - b)(x - y) = %.2f\n", (fA - fB)*(fX - fY));

}
