#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0, num, sum = 0, mult = 0;
    float prom = 0;
    printf("%cCu%cntos n%cmeros quieres ingresar en el programa? -> ", 168, 160, 163);
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nIngresa el n%cmero %i -> ", 163, i + 1);
        scanf("%i", &num);
        if ((num % 2) == 0)
        {
            printf("\n%i es m%cltiplo de 2\n", num, 163);
            mult = mult + 1;
            sum = sum + num;
        }
        else
        {
            printf("\n%i no es m%cltiplo de 2\n", num, 163);
        }
    }

    printf("\nLa cantidad de n%cmeros multiplos fue de %i", 163, mult);

    prom = sum / mult;
    printf("\nEl promedio es: %.2f\n", prom);

    return 0;
}
