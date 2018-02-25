#include <stdio.h>

int power(int a, int b)
{
    int temp = 1;
    printf("%d do %d ", a, b);
    for (int i = 0; i<b; i++)
    {
        temp = temp * a;
    }
    return temp;
}

int main()
{
    int tab[8];
    for (int i = 0; i < 8; i++)
    {
        tab[i] = power(2, i);
        printf("potegi to %d\n", tab[i]);
    }

}