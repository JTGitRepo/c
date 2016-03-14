#include <stdio.h>
#include <ctype.h>

main()
{
	char iGuess, iRandNum;
//	srand(time(0));
	iRandNum =  1; //(rand() % 10) + 1;

	printf("\nGuess a number between 1 and 10: ");
	scanf("%c", &iGuess);
	if (isdigit(iGuess)){
		if (iGuess == iRandNum)
		{
			printf("\nCongratulations! You guessed correct!\n");
		} 
		else 
		{
			printf("\nWrong, the number was %d.\n", iRandNum);
		}
	}
       	else 
	{
		printf("\nThat is not a digit.\n");
	}
}
	



