#include <stdio.h>
int main()
{
    int i, n, m, j;
    printf("La cantidad de filas -> ");
    scanf("%i", &n);

    printf("La cantidad de columnas > ");
    scanf("%i", &m);

    int matriz1[n][m], matriz2[n][m], suma[n][m];

    printf("Ingresa los datos de matriz 1: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%i", &matriz1[i][j]);
        }
        printf("\n");
    }

    printf("Ingresa los datos de matriz 2: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%i", &matriz2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            suma[i][j] = matriz1[i][j] + matriz2[j][i];
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%i", suma[i][j]);
        }
        printf("\n");
    }

    return 0;
}