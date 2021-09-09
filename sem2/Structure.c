#include <stdio.h>

// if typedef is not used then we have to use struct everytime we initialize student

typedef struct
{
    char name[20];
    int roll;
} Student;

int main()
{
    Student s1, *s2;
    printf("Enter the name and roll of student: ");

    s2 = &s1;

    scanf("%[^\n]*c", &s2->name);
    scanf("%d", &s2->roll);


    printf("%s %d", (s1).name, (s1).roll);
    // printf("%s %d", s2->name, s2->roll);
    return 0;
}