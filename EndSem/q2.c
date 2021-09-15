/*Write a C program to display following pattern if input is “WORLD”
W
WO
WOR
WORL
WORLD*/

#include <stdio.h>

int main()
{
	// Initializing the str
	char str[] = "WORLD";
	
	//printing the pattern using two for loops
	for (int i = 0, n = sizeof(str)/sizeof(str[0]); i < n-1; i++) // the loop runs n-1 times because the last character is null character('\0')
	{
		for (int j=0; j<=i; j++) printf("%c", str[j]);
		printf("\n");
	}
	
	return 0;
}