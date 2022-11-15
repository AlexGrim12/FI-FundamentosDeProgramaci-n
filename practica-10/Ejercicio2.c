#include <stdio.h>

int main()
{
    int n, i, j, p = 0;
    printf("Ingrese la cantidad de filas y columnas -> ");
    scanf("%i", &n);

    int matriz1[n][n], matriz2[n][n], diagonal1[n][1], diagonal2[n][1], suma[n][1];

    printf("\nIngresa los datos de matriz 1: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nIngresa los datos de matriz 2: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 1:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%i\t", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%i\t", matriz2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonal1[p][0] = matriz1[i][j];
                p++;
            }
        }
    }

    p = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonal2[p][0] = matriz2[i][j];
                p++;
            }
        }
    }

    printf("\nLa diagonal de la matriz 1 es: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("%i\t", diagonal1[i][j]);
        }
        printf("\n");
    }

    printf("\nLa diagonal de la matriz 2 es: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("%i\t", diagonal2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            suma[i][j] = diagonal1[i][j] + diagonal2[i][j];
        }
    }

    printf("\nLa suma de las dos diagonales es:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("%i\t", suma[i][j]);
        }
        printf("\n");
    }
    return 0;
}