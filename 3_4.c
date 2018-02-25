#include <stdio.h>

int main(){

    float liczba;
    printf("Podaj liczbe zmiennoprzecinkowa\n");
    scanf("%f", &liczba);
    printf("\n%8f", liczba);
    printf("\n%8e", liczba);
}