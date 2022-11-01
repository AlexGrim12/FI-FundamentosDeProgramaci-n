#include <stdio.h>
int main()
{
    float res = 0, a = 2, b = 1, c = 1, sum = 0;
    int i;
    for (i = 0; i < 25; i++)
    {
        res = ((a / b) * c);
        a = a + 2;
        b = b + (4 + i);
        c = c * 2;
        sum = sum + res;
    }
    printf("La suma es igual a: %.2f\n", sum);
    printf("a: %.0f\n", a);
    printf("b: %.0f\n", b);
    printf("c: %.0f\n", c);
    return 0;
}
