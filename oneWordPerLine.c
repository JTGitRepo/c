#include <stdio.h>

#define IN 1
#define OUT 0


main()
{
	int c, state;
	state = OUT;	
	while((c = getchar()) != EOF)
	{
		while (c != ' ' || c != '\n' || c != '\t')
		{
			putchar(c);
		}
		putchar('\n');
			
	}
}


			
