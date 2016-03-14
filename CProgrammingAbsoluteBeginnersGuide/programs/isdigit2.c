#include <stdio.h>
#include <ctype.h>

main()
{
	char cResponse = '\0';

	printf("\nPlease enter a digit: ");
	scanf("%c", &cResponse);
	
	if isdigit(cResponse)
		printf("\nThank You\n");
	else
		printf("\nYou didn\'t enter a digit\n");

}

