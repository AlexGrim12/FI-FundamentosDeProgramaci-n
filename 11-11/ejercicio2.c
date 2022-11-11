// Realizar un programa que permita obtener la traza de una matriz, donde la dimensión la dará el usuario.
#include <stdio.h>
int main()
{
    int i, j, n, m, traza = 0;
    printf("La cantidad de filas -> ");
    scanf("%i", &n);

    printf("La cantidad de columnas > ");
    scanf("%i", &m);

    int matriz[n][m];

    printf("Ingresa los datos de matriz 1: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j)
            {
                traza += matriz[i][j];
            }
        }
    }

    printf("La traza de la matriz es: %i", traza);

    return 0;
}
