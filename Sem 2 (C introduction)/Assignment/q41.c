/* The whether the character is vowel of consonant */

#include <stdio.h>

int main() {
	
	char c;
	printf("Enter the character: ");
	scanf("%c", &c);
	
	char checker[] = {'a', 'e', 'i', 'o', 'u'};
	
	int isvowel = 0;
	for (int i = 0; i < 5; i++) if (c == checker[i] || c == checker[i]-32) isvowel = 1;
	
	if (isvowel) printf("%c is a vowel", c);    
	else printf("%c is a not vowel", c);    
	
	return 0;
}