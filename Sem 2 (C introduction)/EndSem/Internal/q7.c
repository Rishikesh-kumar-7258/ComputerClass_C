/*Write a C program to find total number alphabet available in given string before alphabet P.(eg in
string University total number of alphabet before P is n,i,e,i so total 4 will be output.).*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[30];
	printf("Enter the string: ");
	scanf("%s", &str);
	
	int count = 0;
	for (int i = 0, n = strlen(str); i < n; i++)
	{
		char c = str[i];
		if ((c >= 'a' && c < 'p') || (c >= 'A' && c < 'P'))	count++;
	}
	
	printf("The total such alphabets are %d", count);
	return 0;
}