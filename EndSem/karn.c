#include<stdio.h>
int main()
{
    int arr[10], *p, i;
    printf("Enter the 10 elements\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);

    }
    p = arr;
    printf("Displaying adress of array element ");
    for(i=0; i<10; i++)
    {
        printf("%x\n",p);
        p++;
    }
    p = arr;
    printf("Displaying value of array element using pointer");
    for(i=0; i<10; i++)
    {
        printf("\n%d",*p);
        p++;
    }
    return 0;

}