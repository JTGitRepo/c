#include <stdio.h>

main()
{
	int iRandomNum = 0;
	int iResponse = 0;
	srand(time(0));

	iRandomNum = (rand() % 10) + 1;

	printf("Guess a number between 1 and 10: ");
	scanf("%d", &iResponse);

	if (iResponse == iRandomNum)
		printf("\nYou guessed right\n");
	else
	{
		printf("\nSorry, you guessed wrong\n");
		printf("The correct guess was %d\n", iRandomNum);
	}
}

