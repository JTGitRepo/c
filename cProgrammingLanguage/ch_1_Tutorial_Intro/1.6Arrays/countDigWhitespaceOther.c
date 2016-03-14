#include <stdio.h>

/* count digits, white space, others */
main()
//define the body of the program
{
	int c, i, nwhite, nother;
	//declare integer variables
	int ndigit[26];
	//declare integer array ndigit

	nwhite = nother = 0;
	//assign nwhite and nother value of 0
	for (i = 0; i < 26; i++)
		//assign i value of 0; while i is less than 10; add 1 to i
		ndigit[i] = 0;
	//initiates every instance of array ndigit to value of zero

	while ((c = getchar()) != EOF)
		//verifies that the next character in the input string is not EOF before executing block
		if (c >= 'a' && c <= 'z')
			// verifies input c is greater than OR equal to ASCII value of 0 and less than or equal to ASCII value of 9
			++ndigit[c-'a'];
			// if above conditions are met, adds one to the value of array index c minus ASCII value of zero
		else if (c == ' ' || c == '\n' || c == '\t')
			// verifies whether c is equal to space OR newline OR tab
			++nwhite;
			// if above conditions are met, adds one to variable nwhite
		else
			++nother;
			// if neither of the first to if statments return true, adds, one to variable nother(represents 
			// character other than a space or digit).
	
	printf("a through c =");
	// prints out the phrase 'digits ='
	for (i = 0; i < 26; ++i)
		// assigns instance variable i to 0; checks i is less than 10; adds 1 to i at end of block
		printf(" %d", ndigit[i]);
		// prints ' %d' with %d being instances of array ndigit 0 through 9
	printf(", white space = %d, other = %d\n", nwhite, nother);
	//prints string with total white spaces and other digits at end of output string.
}
