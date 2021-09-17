/*Write a C program to replace all R to K in given string using ASCII value.(eg. If input is RADAR
then output is KADAK)*/

#include <stdio.h>
#include <string.h>


int main()
{
	char str[30];
	printf("Enter the string: ");
	scanf("%s", &str);
	
	for (int i = 0, n = strlen(str); i < n; i++)
	{
		if (str[i] == 'R') str[i] = 'K';
	}
	
	printf("The new string is %s", str);
	
	return 0;
}