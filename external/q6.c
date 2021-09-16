#include <stdio.h>

int main()
{
	int s1 = 1, s2 = 100;
	
	while (s2)
	{
		printf("%d %d ", s1, s2);
		s1 += 2;
		s2 --;
	}
	return 0;
}