#include <stdio.h>

int main()
{
    int i, j, x = 1, nomod = 0, mod = 0, matriz[4][4], mul7[4][4];

    printf("\nIngresa los datos de matriz: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
        printf("\n");
    }

    printf("La matriz original es:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if(matriz[i][j] == 0)
            {
                mul7[i][j] = 7 * x;
                x++;
                mod++;
            }
            else
            {
                if ((matriz[i][j] % 7) == 0)
                {
                    mul7[i][j] = matriz[i][j];
                    nomod++;
                }
                else
                {
                    mul7[i][j] = 7 * x;
                    x++;
                    mod++;
                }
            }
        }
    }

    printf("\nLa matriz con multiplos de 7 es:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%i\t", mul7[i][j]);
        }
        printf("\n");
    }

    printf("\nNumeros no modificados -> %i", nomod);
    printf("\nNumeros modificados -> %i\n",mod);

}