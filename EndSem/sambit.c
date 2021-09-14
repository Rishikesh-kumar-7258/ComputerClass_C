#include <stdio.h>

int main()
{
	int arr[3][3] = {
			{4, 47, 9},
			{3, 45, 12},
			{30, 18, 120}
			};
			
	int even = 0, div = 0;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j=0; j < 3; j++)
		{
			int num = (*arr[i])++;
			if (num%2 == 0) even++;
			
			if (num%3 == 0) div++;
		}
	}
	
	printf("The number of even numbers is %d and number of divisible by 3 is %d", even, div);
}
//#include <stdio.h>
//int main()
//{
//    int num,t;
//    printf("Enter a number: ");
//    scanf("%d",&num);
//    t=num>>5;
//    if (t&1)
//    {
//        printf("The new number is %d",num*5);
//    }
//    else
//    {
//        printf("The new number is %d",num*10);
//    }
//    
//    return 0;
//}