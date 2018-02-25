#include <stdio.h>

int main()
{
    float liczba1, liczba2;
    int temp;
    printf("podaj pierwszą liczbę\n");
    temp = scanf("%f", &liczba1);
    if (temp != 1)
    {   
        printf("PAPA\n");
        return 0;    
    }
    printf("podaj drugą liczbę\n");
    temp = scanf("%f", &liczba2);
    if (temp != 1)
    {   
        printf("PAPA\n");
        return 0;    
    }

    printf("%f", (liczba1 - liczba2)/(liczba1*liczba2));

}