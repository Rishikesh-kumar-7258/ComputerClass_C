/*Write a C program to take a input as string and change each alternat letter to capital to small or small to
capital.(e.g. if input string is JaiHind then output will be jaIHInD).*/

#include <stdio.h>
#include <string.h>


int main()
{
	
	char str[30];
	printf("Enter the string: ");
	scanf("%s", &str);
	
	for (int i = 0, n = strlen(str); i < n; i+=2)
	{
		char c = str[i];
		if (c >= 'A' && c <= 'Z') str[i] += 32;
		else str[i] -= 32;
	}
	
	printf("The changed string is %s", str);
	
	return 0;
}