/*Write a C program to accept a string and generate its code.(eg. If input is HELLO then output is IGOPT).*/

#include <stdio.h>
#include <string.h>


int main()
{
	
	char str[30];
	printf("Enter the string: ");
	scanf("%s", &str);
	
	for (int i = 0, n = strlen(str); i < n; i++)
	{
		str[i] += i + 1;
	}
	
	printf("The changed string is %s", str);
	
	return 0;
}