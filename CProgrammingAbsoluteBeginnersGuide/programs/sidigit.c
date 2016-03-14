#include <stdio.h>
#include <ctype.h>

main()
{
	char cResponse = '\0';

	printf("\nPlease enter a letter: ");
	scanf("%c", &cResponse);

	if(isdigit(cResponse) == 0 )
		printf("\nThank you\n");
	else
		printf("\nYou didn\'t enter a letter\n");
}
