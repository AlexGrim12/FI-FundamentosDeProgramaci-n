#include <stdio.h>

int main()
{

    int r, c; // r de renglon,  c de columna .

    for (r = 0; r < 8; r++)
    {
        for (c = 0; c < 8; c++)
        {
            // PARA LOS PEONES
            if (r == 1 || r == 6)
            {
                printf("P\t");
            }

            // PARA LAS TORRES
            else if ((r == 0 && c == 0) ||
                     (r == 7 && c == 0) ||
                     (r == 0 && c == 7) ||
                     (r == 7 && c == 7))
            {
                printf("T\t");
            }
            // PARA LOS CABALLOS
            else if ((r == 0 && c == 1) ||
                     (r == 7 && c == 1) ||
                     (r == 0 && c == 6) ||
                     (r == 7 && c == 6))
            {
                printf("C\t");
            }
            // PARA LOS ALFILES
            else if ((r == 0 && c == 2) ||
                     (r == 7 && c == 2) ||
                     (r == 0 && c == 5) ||
                     (r == 7 && c == 5))
            {
                printf("A\t");
            }
            // PARA LA REINA
            else if ((r == 0 && c == 3) ||
                     (r == 7 && c == 3))
            {
                printf("M\t");
            }
            // PARA EL REY
            else if ((r == 0 && c == 4) ||
                     (r == 7 && c == 4))
            {
                printf("R\t");
            }

            else
            {
                printf("-\t");
            }
        }
        printf("\n");
    }
    return 0;
}