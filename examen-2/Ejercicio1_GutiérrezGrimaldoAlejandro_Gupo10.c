#include <stdio.h>
int main()
{
    char tablero[8][8], peon = 'P', torre = 'T', caballo = 'C', alfil = 'A', rey = 'K', reyna = 'Q';
    int i = 0, j = 0;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 1 || i == 6)
            {
                tablero[i][j] = peon;
            }
            else if ((i == 0 && j == 0) ||
                     (i == 7 && j == 0) ||
                     (i == 0 && j == 7) ||
                     (i == 7 && j == 7))
            {
                tablero[i][j] = torre;
            }
            else if ((i == 0 && j == 1) ||
                     (i == 7 && j == 1) ||
                     (i == 0 && j == 6) ||
                     (i == 7 && j == 6))
            {
                tablero[i][j] = caballo;
            }
            else if ((i == 0 && j == 2) ||
                     (i == 7 && j == 2) ||
                     (i == 0 && j == 5) ||
                     (i == 7 && j == 5))
            {
                tablero[i][j] = alfil;
            }
            else if ((i == 0 && j == 4) ||
                     (i == 7 && j == 4))
            {
                tablero[i][j] = rey;
            }
            else if ((i == 0 && j == 3) ||
                     (i == 7 && j == 3))
            {
                tablero[i][j] = reyna;
            }
            else
            {
                tablero[i][j] = '.';
            }
        }
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%c\t", tablero[i][j]);
        }
        printf("\n");
    }
    return 0;
}
