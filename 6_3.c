#include <stdio.h>

int main()
{
    for (int i = 5; i >= 0; i--)
    {
        for (int k = 5; k - i >= 0 ; k--)
        {
            printf("%c", k + 65);
        }
        printf("\n");
    }
    return 0;
}