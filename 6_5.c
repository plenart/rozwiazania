#include <stdio.h>

int main()
{
    int litera;

    printf("Podaj literę która będzie u podstawy piramidy:\n");
    if (scanf("%c", &litera) == 1)
    {
        printf("%d\n", litera);

        if (litera > 90)
        {
            litera -= 32;
            printf("podano mala litere zmieniamy na duża\n");
        }
        for (int i = 0; i <= litera - 'A'; i++)
        {
            int k = 'A';
            printf("%*c", litera - i - 'A' + 1, ' ');
            for ( k ; k < i + 'A'; k++)
            {
                printf("%c" , k);
            }
            for (k ; k >= 'A'; k--)
            {
                printf("%c", k);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Podano zlą literę\n");
    }
}