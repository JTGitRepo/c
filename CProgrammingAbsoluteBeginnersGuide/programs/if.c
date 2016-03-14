#include <stdio.h>

main()
{
	char charVar = '1';
	int intVar = 49;
	
	printf(" %d\n", (int)charVar);
	if (charVar == intVar)
		printf("character %c equals integer %d\n", charVar, intVar);
	else
		printf("nope\n");

	return 0;
}
