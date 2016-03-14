// playing with getch() and putch()
// file getchPutch.c
// Author John Todd


#include <stdio.h>
#include <string.h>

main()
{

	int i;
	char msg[100];

	for(i = 0; i < 100; i++)
	{
		msg[i] = getchar();
		if( msg[i] == '\n')
		{
			break;
		}
	}
	for(i = 0; i < strlen(msg); i++)
	{
		putchar(msg[i]);
	}
}

