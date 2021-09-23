#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	int temp = n, rev = 0;
	while (temp)
	{
		rev = rev*10 +( temp %10);
		temp /= 10;
	}
	
	if (rev == n) printf("%d is a palindrom", n);
	else printf("%d is not a palindrom", n);
	return 0;
}