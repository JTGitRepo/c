#include <stdio.h>

main()
{
	int iResponse = 0;

	printf("\n1\tSports\n");
	printf("\n2\tGeography\n");
	printf("\n3\tMusic\n");
	printf("\n4\tWorld Events\n");
	printf("\nPlease select a category (1-4): ");
	scanf("%d", &iResponse);

	switch (iResponse) 
	{
		case 1:
			printf("\nYou selected sports questions\n");
			break;
		case 2:
			printf("\nYou selected geography questions\n");
			break;
		case 3:
			printf("\nYou selected music questions\n");
			break;
		case 4:
			printf("\nYou selected world event questions\n");
			break;
		defualt:
			printf("Invalid category\n");
	} // end switch

} // end main function

