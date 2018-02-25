#include <stdio.h>

int main()
{
    int znak = 0;
    int tab[] = {0, 0, 0};

    while (znak != '#')
    {
        scanf("%c", &znak);
        printf("znak |%c| w ASCII |%d|\n", znak, znak);
        if (znak == 32)
        {
            tab[0] += 1;
            continue;
        }
        if (znak == 10)
        {
            tab[1] += 1;
            continue;
        }
        tab[2] += 1;
    }
    printf("%d %d %d", tab[0], tab[1], tab[2]);
}