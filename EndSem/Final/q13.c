#include <stdio.h>
#include "countvowel.h"

int main()
{
	char sent[30];
	printf("Enter the sentence: ");
	scanf("%[^\n]*c", &sent);
	
	printf("The number of vowels is %d", countVowel(sent));
}