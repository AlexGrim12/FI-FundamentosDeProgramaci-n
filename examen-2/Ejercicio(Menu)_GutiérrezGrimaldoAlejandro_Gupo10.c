#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int programa1()
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

int programa2()
{
    char caracteres[50];
    int i = 0;
    printf("Inserte los caracteres que desee ivertir -> ");
    scanf("%s", caracteres);
    printf("Los caracteres invertidos son -> ");
    for (i = strlen(caracteres); i >= 0; i--)
    {
        printf("%c", caracteres[i]);
    }
    return 0;
}

int opciones()
{
    printf("\n\n%cQu%c desea realizar? 1. Repetir este programa 2. Ir al men%c 3. Salir -> ", 168, 130, 163);
    return 0;
}

int main()
{
menu:
    int op_g, r;
    printf("El menu es el siguiente: \n\n");
    printf("1. Ejercicio 1\n2. Ejercicio 2\n3. Salir\n");
    printf("\n%cQu%c programa desea ejecutar? -> ", 168, 130);
    scanf("%i", &op_g);
    switch (op_g)

    {
    case 1:
    rprograma1:
        programa1();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma1;
        }
        else if (r == 2)
        {
            goto menu;
        }
        break;
    case 2:
    rprograma2:
        programa2();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma2;
        }
        else if (r == 2)
        {
            goto menu;
        }
        break;
    case 3:
        printf("\nSaliendo...");
        break;
    default:
        printf("Opci%cn no v%clida", 162, 160);
        break;
    }
    printf("\n\nGracias por usar el programa :)");
    return 0;
}
