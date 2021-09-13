#include <stdio.h>

int main()
{
	for (char c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'D' || c == 'J' || c == 'M' || c == 'T' || c == 'Y') continue;
		printf("%c ", c);
	}
	
	return 0;
}