#include <stdio.h>

int power(int n)
{
	int ans = 1;
	for (int i =0; i< n; i++)
	{
		ans *= n;
	}
	
	return ans;
}

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d", &n);
	
	int sum = 0, st = 2;
	for (int i = 1; i <= n; i++)
	{
		sum += st*power(i);
		st++;
	}
	
	printf("answer is %d", sum);
	return 0;
}