#include <stdio.h>

// char *ciag = "Wlazł kotek na polotek i mruga";

int main()
{
    int powt = 0;
    char pop = '';
    char znak;
    while ((znak = getchar()) != '#')
    {
        printf("%c %c\n", pop, znak);
        if (pop == 'o' && znak == 't')
        {
            powt++;
        }
        pop = znak;
    }
    printf("%d wystapila kombinacja |ot|", powt);

}