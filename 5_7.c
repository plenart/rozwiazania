#include <stdio.h>


void szescian(float liczba)
{
    printf("%5.2f", liczba*liczba*liczba);
}

int main()
{
    float liczba = 0.0;
    printf("podajk jakąś liczbę zmiennoprzecinkową\n");
    scanf("%f", &liczba);
    szescian(liczba);

    return 0;
}