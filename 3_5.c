#include <stdio.h>


int sek = 3156*10000;

int main()
{
    // printf("%e", sek);
    printf("Ile masz lat?\n");
    int wiek = 0;
    scanf("%d", &wiek);
    printf("%d", wiek * sek);
    return 0;
}