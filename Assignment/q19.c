#include <stdio.h>

int main()
{
	int n;
	printf("Enter the ASCII code: ");
	scanf("%d", &n);
	
	printf("The character corresponding to the ASCII code is %c", n);

//	for (int i = 0; i < 256; i++) printf("%c\n", i);
	
	return 0;
}