#include <stdio.h>

#define stawka1 35
#define stawka2 40
#define stawka3 45
#define stawka4 50
#define etat 40
#define prog1 1200
#define prog2 600


int main()
{
    printf("----------------------\n");
    printf("Twoja stawka godzinowa to:\n");
    printf("1)%d      2)%d\n", stawka1, stawka2);
    printf("3)%d      4)%d\n", stawka3, stawka4);
    printf("5) KONIEC\n");
    short opcja;
    short stawka;
    while (scanf("%d", &opcja) == 1 && opcja != 5)
    {
        switch (opcja){
        case 1: 
            stawka = stawka1;
            break;
        case 2:
            stawka = stawka2;
            break;
        case 3:
            stawka = stawka3;
            break;
        case 4:
            stawka = stawka4;
            break;
        
        default:
            printf("popraw wybor 1-5\n");
            continue;
        }
        printf("Twoja stawka to %d \n", stawka);

        printf("Ile godzin pracowałeś?\n");
        int godzin;
        int nadgodzin;
        scanf("%d", &godzin);
        if (godzin > etat)
        {
            nadgodzin = godzin - etat;
            godzin = etat;
        }
        float zarobki = 0;
        float brutto;
        zarobki = (nadgodzin * stawka * 1.5) + godzin * stawka;
        brutto = zarobki;
        float podatek = 0;
        float suma_podatku = 0;

        if (zarobki <= prog1)
        {
            podatek = zarobki * 15/100;
            suma_podatku += podatek;
        }

        if (zarobki > prog1)
        {
            podatek = prog1 * 15/100;
            suma_podatku += podatek;

            if (zarobki <= prog1 + prog2)
            {
                podatek = (zarobki - prog1) * 20/100;
                suma_podatku += podatek;
            }

            if (zarobki >= prog1 + prog2)
            {
                podatek = (prog1 + prog2) * 20/100;
                suma_podatku += podatek;
                podatek = (zarobki - prog1 -prog2) * 25/100;
                suma_podatku += podatek;
            }
        }
        zarobki = zarobki - suma_podatku;
        printf("brutto %0.2f netto %0.2f, podatek %0.2f\n",brutto, zarobki, suma_podatku);
    }
}