#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	if (n > 100 && n < 200) printf("The number is between 100 and 200\n");
	else printf("The number is not present in between 100 and 200\n");
	
	int isprime = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0) 
		{
//			printf("%d\n", i);
			isprime = 0;
			break;
		}
	}
	
	if (isprime) printf("%d is a prime number", n);
	else printf("%d is not a prime number", n);
	
	return 0;
}