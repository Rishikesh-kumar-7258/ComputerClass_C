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