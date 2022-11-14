#include <stdio.h>
// Obtener la matriz transpuesta de dimensión indicada por el usuario que almacena datos de tipo caracter.
int main()
{
    int i, j, n, m, n1, m1;

    printf("Introduzca el número de filas: ");
    scanf("%i", &n);
    printf("Introduzca el número de columnas: ");
    scanf("%i", &m);
    printf("Introduzca los elementos de la matriz:\n");

    char matriz[n][m][2], transpuesta[n][m][2];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%s", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir la matriz original
    printf("Matriz original:");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            printf("%s ", matriz[i][j]);
            if (j == m - 1)
                printf("");
        }
    }
    // Imprimir la matriz transpuesta
    printf("Matriz transpuesta:");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%s ", matriz[j][i]);
            if (j == n - 1)
                printf("");
        }
    }
    return 0;
}