// Realizar un programa que permita obtener la multiplicación de dos matrices. Se deberán crear las siguientes funciones Dame_dimension, Guarda_datos, Muestra_datos, multiplica_datos. Se deberá verificar que las matrices dadas por el usuario sean congruentes, es decir que se puedan multiplicar entre ella.

#include <stdio.h>

void Dame_dimension(int *fil, int *col)
{
    printf("Inserte la cantidad de filas para la matriz -> ");
    scanf("%i", fil);
    printf("Inserte la cantidad de columnas para la matriz -> ");
    scanf("%i", col);
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

int main()
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
}