#include <stdio.h>

main()
{
	char choice;

	do
	{
		printf("\n\n\tYour choices are:\n1. one\n2. two\n3. three\n4. quit\n");
		printf("please enter you choice: ");
		scanf(" %c", &choice);
//		choice = (int)choice;
//		printf("you chose %d\n", (int)choice);
		switch(choice)
		{
			case '1':
				{
					printf("You chose one\n");
					break;
				}
			case '2':
				{
					printf("You chose two\n");
					break;
				}
			case '3':
				{
					printf("You chose three\n");
					break;
				}
			case '4':
				{
					printf("Good bye\n");
					break;
				}
			default:
				{
					printf("That is not a valid choice\n");
					break;
				}
		}



	} while (choice != '4');
}
