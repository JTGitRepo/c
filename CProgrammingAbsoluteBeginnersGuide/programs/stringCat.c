#include <stdio.h>
#include <string.h>

main() 
{	
	char firstString[] = "This is a character array... ";
	char secondString[] = "that has been CONCATENATED!!!!!";
	printf("%s\n", firstString);
	strcat(firstString, secondString);
	printf("%s\n", firstString);
	
	return 0;
}
