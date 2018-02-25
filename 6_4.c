#include <stdio.h>

int main()
{
    int g = 65;
    for (int i = 5; i >= 0; --i)
    {
        for (int k = 0; k + i <= 5; k++)
        {
            printf("%c", g++);
        }
        printf("\n");
    }
}
