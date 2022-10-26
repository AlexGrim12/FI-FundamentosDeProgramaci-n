#include <stdio.h>
int main()
{
    int c, i = 1;
    float n, prom;
    printf("Cuantas datos quieres incluir? ");
    scanf("%i", &c);
    do
    {
        printf("Dame el dato %i: ", i);
        scanf("%f", &n);
        prom = prom + n;
        i++;
    } while (i <= c);
    prom = prom / c;
    printf("El promedio es: %f", prom);

    return 0;
}
