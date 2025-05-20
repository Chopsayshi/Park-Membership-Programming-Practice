#include <stdio.h>
#include <stdlib.h>

/* First attempt at coding in 'C' 20/05/2025 (Do have experince using python.)
	Notes:
		- %s = str, %d = int , %f = float, %lf = input double, %f print double, %c = char   (a double is 2x size of float)
		- const = can be added before a variable type to make it unchagangeable.
		- scanf("Input a number: %d", num1) = how you get user input for a variable.
		- fgets(variableName, charLimit, stdin) = how you get a line of text that can only be stored as string.
		- 'stdin' = standard input

		Program goal:
		- Park member managment system to keep track of member details.
		  Should be able to Add, Delete, and Update members.
		- Extra: Login

*/

int main()
{
	/* Variables
		- STRING =  char ___[]   /THE [] LETS YOU LIMIT THE AMOUNT OF CHARACTERS THE VARIABLE CAN HOLD/
		- CHARACTER = char ___	- INTEGER = int ___		- DOUBLE = double ___

	*/
	char line[] = "-----------------------------------------------------------------";
	int members = 32;

	printf("\t  / \\		\n");
	printf("\t /   \\ /\\	\n");
	printf("\t/     \\  \\	\n");
	printf("\t -| |- ||	\n");
	printf("%s \n", line);
	printf("\t\t WELCOME TO PARK MEMBERS DATABASE V1 \n\n");

	printf("\tThere are currently %d %s.\n", members, "park members");
	return 0;
}

int add()
{
	printf("Test");
}