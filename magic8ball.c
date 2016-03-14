// Magic 8 ball game
// Author John Todd
// Date 3/14/2016
// file magic8ball.c

/* This program prompts the user think of a question and then to "shake" the eight ball(by pressing any key)
 * and then it outputs a furtune based on the output of a randomly generated number. */

#include <stdio.h>
#include <time.h>
#include <string.h>

main()
{

	int fortune;
	time_t t;
	char ans;
	
	printf("\nHello, brave traveler. Are you prepared to meet your fate?\n");
	printf("The magic eightball can answer any question you ask.\n");
	printf("Just think of your question, shake the eightball(press enter on your keyboard),\n");
	printf("and the magic 8 ball will deliver un to you the answers\n you seek. Ready with your question?, then ");
	do {
	printf("go ahead, shake the 8 ball.(press enter)\n");
	getchar();
	srand(time(&t));
	fortune = (rand() % 8);
	if (fortune == 0)
	{
		printf("Ask again later\n\n");
	}
	if (fortune == 1)
	{
		printf("It is certain.\n\n");
	}
	if (fortune == 2)
	{
		printf("It is decidedly so.\n\n");
	}
	if (fortune == 3)
	{
		printf("Without a doubt.\n\n");
	}
	if (fortune == 4)
	{
		printf("Yes, definitely.\n\n");
	}
	if (fortune == 5)
	{
		printf("You may rely on it.\n\n");
	}
	if (fortune == 6)
	{
		printf("As I see it, yes.\n\n");
	}
	if (fortune == 7)
	{
		printf("Outlook hazy try again.\n\n");
	}
	printf("do you have another question for the magic 8ball?(y/n)\n");
	scanf(" %c", &ans);
	ans = tolower(ans);
	/*while ((ans != 'y') || (ans != 'n'))
	{
		printf("\nivalid input. Please try again.");
	}
*/
	} while (ans == 'y');

	return 0;
}
