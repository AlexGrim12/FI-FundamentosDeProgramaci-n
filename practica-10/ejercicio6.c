#include <stdio.h>
#include <math.h>

int programa1()
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

int programa2()
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

int programa3()
{
    int ncolumnas, nrenglones, i, j, suma = 0;
    printf("Dame la cantidad de columnas del arreglo -> ");
    scanf("%i", &ncolumnas);
    printf("Dame la cantidad de renglones del arreglo -> ");
    scanf("%i", &nrenglones);

    int matriz[nrenglones][ncolumnas];

    for (i = 0; i < ncolumnas; i++)
    {
        for (j = 0; j < nrenglones; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
            if (matriz[i][j] < 0 || matriz[i][j] > 9)
            {
                printf("Valor no valido");
                goto fin;
            }
            if (matriz[i][j] == 0)
                suma = suma + 1;
        }
        printf("\n");
    }

    for (i = 0; i < ncolumnas; i++)
    {
        for (j = 0; j < nrenglones; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("La cantidad de ceros fue -> %i", suma);
fin:
    return 0;
}

int programa4()
{
    int i, j, n, m, n1, m1;

    printf("Introduzca el n%cmero de filas: ", 163);
    scanf("%i", &n);
    printf("Introduzca el n%cmero de columnas: ", 163);
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
        printf("\n\t\t");
        for (j = 0; j < m; ++j)
        {
            printf("%s ", matriz[i][j]);
        }
    }
    // Imprimir la matriz transpuesta
    printf("\n\nMatriz transpuesta:");
    for (i = 0; i < m; ++i)
    {
        printf("\n\t\t");
        for (j = 0; j < n; ++j)
        {
            printf("%s ", matriz[j][i]);
        }
    }
    return 0;
}

int programa5()
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
            if (matriz[i][j] == 0)
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
    printf("\nNumeros modificados -> %i\n", mod);
    return 0;
}

int opciones()
{
    printf("\n\n%cQu%c desea realizar? 1. Repetir este programa 2. Ir al men%c 3. Salir -> ", 168, 130, 163);
    return 0;
}

int main()
{

rprograma6:
    int op_g, r;
    printf("1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n6. Ejercicio 6\n7. Salir\n");
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
            goto rprograma6;
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
            goto rprograma6;
        }
        break;
    case 3:
    rprograma3:
        programa3();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma3;
        }
        else if (r == 2)
        {
            goto rprograma6;
        }
        break;
    case 4:
    rprograma4:
        programa4();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma4;
        }
        else if (r == 2)
        {
            goto rprograma6;
        }
        break;
    case 5:
    rprograma5:
        programa5();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma5;
        }
        else if (r == 2)
        {
            goto rprograma6;
        }
        break;
    case 6:
        goto rprograma6;
        break;
    case 7:
        printf("\nSaliendo...");
        break;
    default:
        printf("Opci%cn no v%clida", 162, 160);
        break;
    }
    printf("\n\nGracias por usar el programa");
    return 0;
}
