//Write a C program if input is BRICS then display BARAIACAS.

#include <stdio.h>
#include <string.h>

int main()
{
	// Initializing and taking input
	char str[30];
	printf("Enter the string: ");
	scanf("%s", &str);
	
	
	// checking the condition if input is BRICS
	if (strcmp(str, "BRICS") == 0) 
	{
//		strcpy(str, "BARAIACAS") //easy method

		// long method
		char temp[30];
		int j = 0;
		for (int i = 0, n = sizeof(str)/sizeof(str[0]); i < n; i++) 
		{
			temp[j] = str[i];
			if (str[i] != 'S') temp[j+1] = 'A';
			j+=2;
		}
		
		strcpy(str, temp);
	}
	
	
	printf("The entered string is %s", str);
	
	return 0;
}