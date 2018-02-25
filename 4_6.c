#include <stdio.h>
#include <string.h>

int main(){
    printf("podaj imie i nazwisko:\n");
    char imie[32] = "";
    char nazwisko[32] = "";
    scanf("%s %s", imie, nazwisko);
    printf("%s %s\n",  nazwisko, imie);
    printf("%*d %*d", strlen(nazwisko), strlen(nazwisko), strlen(imie), strlen(imie));

    return 0;



}