#include <stdio.h>
#include <math.h>

int main()
{
    int x = 0, i, j;
    double tablero[8][8], suma = 0;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            tablero[i][j] = pow(2, x);
            x++;
        }
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%.0f\n", tablero[i][j]);
        }
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            suma = suma + tablero[i][j];
        }
    }

    printf("\nLa suma de total de granos es -> %.0f\n", suma);
    return 0;
}
