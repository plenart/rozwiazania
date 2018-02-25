#include <stdio.h>

const float k0 = 237.16;

float f_to_c(float f)
{
    float c;
    c = 5.0/9.0 * (f - 32.0);
    return c;
}

int main()
{
    float f;
    printf("Podaj temperature w F\n");
    while (scanf("%f", &f) == 1)
    {
        printf("F:[%3.2f]\nC:[%3.2f]\nK:[%3.2f]\n", f, f_to_c(f), f_to_c(f) + k0);
        printf("Podaj temperature w F\n");
    }
    printf("papa\n");
}
