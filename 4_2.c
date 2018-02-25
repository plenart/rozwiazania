#include <stdio.h>
#include <string.h>
int main()
{
    char *imie = "Piotr";
    printf("\"%s\"\n", imie);
    printf("\"%20s\"\n", imie);
    printf("\"%-20s\"\n", imie);
    int dlugosc = strlen(imie);
    printf("%d\n", dlugosc);
    printf("|%*s|",dlugosc+3, imie);
    return 0;
}