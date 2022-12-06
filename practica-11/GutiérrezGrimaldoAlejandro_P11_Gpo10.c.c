#include <stdio.h>
#include <math.h>

char ultima(char cadena[100])
{
    int i;
    for (i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i + 1] == '\0')
        {
            return cadena[i];
        }
    }
    return ' ';
}
float Guarda_datos(float matriz[100][100], int fil, int col)
{
    int i = 0, j = 0;
    printf("Inserte los datos de la matriz -> \n");
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("[%i][%i]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}
void Muestra_datos(float matriz[100][100], int fil, int col)
{
    int i = 0, j = 0;
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%.1f\t", matriz[i][j]);
        }
        printf("\n");
    }
}
float acomoda_datos(float matriz[100][100], float matriz2[100][100], int fil, int col)
{
    int i = 0, j = 0;
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            matriz2[i][j] = matriz[j][i];
        }
    }
}
void Dame_dimension(int *fil, int *col)
{
    printf("Inserte la cantidad de filas para la matriz -> ");
    scanf("%i", fil);
    printf("Inserte la cantidad de columnas para la matriz -> ");
    scanf("%i", col);
}
float multiplica_datos(float matriz[100][100], float matriz2[100][100], float matriz3[100][100], int fil, int col, int fil2, int col2)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col2; j++)
        {
            matriz3[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                matriz3[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }
}

int programa1()
{
    char cadena[100];
    printf("Ingrese una cadena de hasta 100 caracteres: ");
    scanf("%s", cadena);
    printf("El ultimo caracter es: %c", ultima(cadena));
    return 0;
}
int programa2()
{
    int fil, col;
    printf("Inserte la cantidad de filas para la matriz -> ");
    scanf("%i", &fil);
    printf("Inserte la cantidad de columnas para la matriz -> ");
    scanf("%i", &col);
    float matriz[fil][col], matriz2[fil][col];
    Guarda_datos(matriz, fil, col);
    printf("Matriz original: \n");
    Muestra_datos(matriz, fil, col);
    acomoda_datos(matriz, matriz2, fil, col);
    printf("Matriz transpuesta: \n");
    Muestra_datos(matriz2, fil, col);
    return 0;
}
int programa3()
{
    int fil, col, fil2, col2;
    Dame_dimension(&fil, &col);
    Dame_dimension(&fil2, &col2);
    if (col == fil2)
    {
        float matriz[fil][col], matriz2[fil2][col2], matriz3[fil][col2];
        Guarda_datos(matriz, fil, col);
        Guarda_datos(matriz2, fil2, col2);
        printf("\nLos datos de la matriz 1 son:\n");
        Muestra_datos(matriz, fil, col);
        printf("\nLos datos de la matriz 2 son:\n");
        Muestra_datos(matriz2, fil2, col2);
        multiplica_datos(matriz, matriz2, matriz3, fil, col, fil2, col2);
        printf("\nEl resultado de la multiplicación de las matrices es:\n");
        Muestra_datos(matriz3, fil, col2);
    }
    else
    {
        printf("Las matrices no son congruentes");
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

rprograma6:
    int op_g, r;
    printf("1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Salir\n");
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
        printf("\nSaliendo...");
        break;
    default:
        printf("Opci%cn no v%clida", 162, 160);
        break;
    }
    printf("\n\nGracias por usar el programa");
    return 0;
}
