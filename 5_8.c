#include <stdio.h>

int main()
{
    printf("Podaj dzielnik:\n");
    int dzielnik, dzielna = 1;
    scanf("%d", &dzielnik);
    while (dzielna > 0)
    {
        printf("Podaj dzielną\n");
        scanf("%d", &dzielna);
        if (dzielna > 0)
        {
            printf("Modula to: [%d]\n", dzielna % dzielnik);
        }
        else
        {
            printf("papa\n");
        }
    }
    return 0;
}