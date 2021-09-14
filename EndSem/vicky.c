// Write a C program to enter 10 employee detail like empname, empid, empsalary, empcity using 
// structure and display the name of employee whose salary is greater than 10000 and less than 50000.
#include<stdio.h>
struct empDetails
{
    char empname[20];
    int empid;
    int empsalary;
    char empcity[20];
};

int main()
{
    struct empDetails emp[10];
    printf("Enter employee name, id, salary and city \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter details of %d employee\n", i+1);
        scanf("%s%d%d%s",&emp[i].empname, &emp[i].empid, &emp[i].empsalary, &emp[i].empcity);
    }

    for (int i = 0; i < 10; i++)
    {
        if (emp[i].empsalary > 1000 && emp[i].empsalary<50000)
        {
            printf("%s\n", emp[i].empname);
        }
        
    }    
    return 0;
}