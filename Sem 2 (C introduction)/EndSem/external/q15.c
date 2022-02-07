/*
Write a program in C to print a string in reverse using a pointer.(e.g. if input is GENUINE then reverse output
is ENIUNEG)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	
	char str[30];
	printf("Enter the string: ");
	scanf("%s", &str);
	
	int n = strlen(str);
	
	char *ptr = str;
	
	for (int i = 1; i < n; i++) ptr++;
	
	for (int i = 0; i < n; i++)
	{
		printf("%c", *ptr--);
	}
	
	return 0;
}