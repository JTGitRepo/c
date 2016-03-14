#include <stdio.h>

// count spaces between words. if spaces = more than one, reduce spaces to one
main()
{
	int c, inspace;
	
	inspace = 0;	
	while((c = getchar()) != EOF){
		if(c == ' '){
			if(inspace == 0){
				inspace = 1;
				putchar(c);
			}
	}
	
		if(c != ' '){
			inspace = 0;
			putchar(c);
		}
	}
}

