/*Write a C program to generate following pattern:
P
**
PPP
****
PPPPP
*/

#include <stdio.h>

int main()
{
	
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) printf("%c", i&1 ? '*' : 'P');
		printf("\n");
	}
	
	return 0;
}