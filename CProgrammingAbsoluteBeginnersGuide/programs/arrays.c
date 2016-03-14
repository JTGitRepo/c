//this simple program uses putchar to print the elements of an array
//Author: John Todd
//file arrays.c
//


#include <stdio.h>

main()
{
	int i;
	char array[10] = "ehlow";
	putchar('\n');
	for(i = 0; i < 10; i++) {
		putchar(array[i]);
	}
	putchar('\n');
}

