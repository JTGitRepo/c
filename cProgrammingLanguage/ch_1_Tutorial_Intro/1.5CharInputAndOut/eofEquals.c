#include <stdio.h>

main() 
{
	printf("The val of EOF is %d\n\n", EOF);
	printf("press return");
	printf("%d", getchar() != EOF);
}
