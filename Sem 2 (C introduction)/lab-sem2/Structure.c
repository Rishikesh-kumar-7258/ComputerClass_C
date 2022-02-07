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

#include <stdio.h>
struct player
{
    char name[20];
    int jrsyno;
};
int main()
{
    struct player *p, p1[3];

    for (int i = 0; i <= 2; i++)
    {
        p = &p1[i];
        printf("\nEnter no.%d player name and the jersey no.:\n", i + 1);
        scanf("%s%d", &p->name, &p->jrsyno);
    }
    for (int j = 0; j <= 2; j++)
    {
        p = &p1[j];
        printf("\nNo. %d player is %s and the jersey no. is %d\n", j + 1, p->name, p->jrsyno);
    }

    return 0;
}