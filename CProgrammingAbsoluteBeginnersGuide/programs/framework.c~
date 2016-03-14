// This is a basic framework for any program. once the program is complete it asks the user if they wish to 
// use the program again. If they enter 'y' or 'Y' or 'yes' the program will repeat. If they enter 'n' or 'N' 
// the program will terminate. If they enter anything other than y or n, the program will tell
// them that is an invalid input and prompt them again for their choice 

#include <stdio.h>

main()
{
	// character variable for choosing whether or not to repeat the program
	char quit;

	// do while loop that repeats when the user chooses y for the quit variable
	do
	{
		//body of program goes here
		//
		//
		//
		//

	// This do while loop makes sure that the user enters either y or n
	do
		{
		printf("Would you like to repeat the program?(y/n) ");
		scanf(" %c", &quit);

		// changes quit value to lowercase
		quit = tolower(quit);
		//verifies quit equals either y or n
		if ((quit != 'y') && (quit != 'n'))
		{
			// if quit doesn't equal y AND doesn't equal n this will print out to inform the user
			printf("\ninvalid input.\n");
		} 			
		// while statement breaks when user enters valid input (y or n)
		} while ((quit != 'y') && (quit != 'n'));
	// entire body of do while loop repeats if quit equals y
	} while ( quit == 'y');
}
