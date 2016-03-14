//Test of nested case switch statements
// Date Monday, March 7th, 2016
// file nestedCases.c
// Author John Todd

/* This program is a test of the functionality and usability of nested case/switch statements */
/* CONCLUSION: It would appear that nested switch/case statements work perfectly fine as long as
the lower switch/case statements are enclosed within thier own functions, as is shown below. */

#include <stdio.h>
char chicago(char choice);
main()
{
char choice1;
char choice2;

printf("What is your favorite city?\n");
printf("1. Chicago\n2. New York\n3. LA\n4. Boston\n");
scanf(" %c", &choice1);
switch(choice1)
{
	case '1': // Chicago
		printf("Chicago\n");
		printf("Why?\n1. Pizza\n2. Baseball\n3. Wind\n");
		scanf(" %c", &choice2);
		chicago(choice2);
		break;
	case '2':
		printf("New York\n");
		break;
	case '3':
		printf("LA\n");
		break;
	case '4':
		printf("Boston\n");
		break;
	default:
		printf("invalid choice\n");
}
}

char chicago( char choice)
{
	switch(choice)
		{
			case '1':
				printf("Pizza\n");
				break;
			case '2': 
				printf("Baseball\n");
				break;
			case '3':
				printf("Wind\n");
				break;
			default:
				printf("invalid choice\n");	
				break;
		}
		
}
