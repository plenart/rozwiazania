#include <stdio.h>
#define godzina 60


int main()
{
    int czas = 1;
    while (czas > 0)
      {
        printf("Podaj czas, 0 i -1 kończą program\n");
        scanf("%d", &czas);
        printf("%dh:%dm\n", czas/godzina, czas%godzina);
      }
    printf("PAPA\n");
    return 0;
}