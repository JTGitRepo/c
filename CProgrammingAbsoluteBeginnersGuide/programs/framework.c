// This is a basic framework for any program. once the program is complete it asks the user if they wish to 
// use the program again. If they enter 'y' or 'Y' or 'yes' the program will repeat. If they enter 'n' or 'N' 
// the program will terminate. If they enter anything other than y or n, the program will tell
// them that is an invalid input and prompt them again for their choice 

#include <stdio.h>

main()
{
	char quit;

	do
	{

	do
		{
		printf("Would you like to repeat the program?(y/n) ");
		scanf(" %c", &quit);

		quit = tolower(quit);
		if ((quit != 'y') && (quit != 'n'))
		{
			printf("\ninvalid input.\n");
		} 			
		} while ((quit != 'y') && (quit != 'n'));
	} while ( quit == 'y');
}
