#include <stdio.h>
#include <string.h>

// dlugosc z strlen jest zawsze o jeden wieksza niz indeks tablicy ("\0")

int main()
{
    char napis[50];
    printf("Podaj jakiś napis:\n");
    scanf("%s", napis);
    printf("podano: |%s|\n", napis);

    int dl = strlen(napis);
    printf("dlugosc to %d\n", dl);
    
    int i;
    char temp;
    for (i = 0; i < dl/2; i++)
    {
        printf("%d %c %c \n", i, napis[i], napis[dl - i - 1]);
        temp = napis[dl - i - 1] ;
        napis[dl - i - 1] = napis[i];
        napis[i] = temp;
    }
    
    printf("Odwrocony napis: %s\n", napis);
}