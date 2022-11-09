#include <stdio.h>
int main()
{
    int i, n;
    printf("Tamaño de los vectores -> ");
    scanf("%i", &n);

    float vect1[n], vect2[n], vect3[n], punto[n], total, vectorial1[n], verctorial2[n], escalar;

    printf("\nIntroduce valores para el primer vector: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%f", &vect1[i]);
    }

    printf("Introduce valores para el segundo vector: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%f", &vect2[i]);
    }

    for (i = 0; i < n; i++)
    {
        vect3[i] = vect1[i] + vect2[i];
        printf("Posicion %d -> %2.0f\n", i + 1, vect3[i]);
    }

    for (i = 0; i < n; i++)
    {
        punto[i] = vect1[i] * vect2[i];
        total = total + punto[i];
    }

    printf("\nEl producto punto es -> %.1f", total);
    printf("\nIntroduce un escalar -> ");
    scanf("%f", &escalar);
    for (i = 0; i < n; i++)
    {
        vectorial1[i] = vect1[i] * escalar;
        verctorial2[i] = vect2[i] * escalar;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEl escalar %.0f del vector 1 es -> %.0f", escalar, vectorial1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nEl escalar %.0f del vector 2 es -> %.0f", escalar, verctorial2[i]);
    }

    return 0;
}
