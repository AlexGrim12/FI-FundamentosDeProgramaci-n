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
    printf("La suma de la ecuaci%cn hasta z(25) es igual a: %.2f\n", 162, sum);
    return 0;
}
