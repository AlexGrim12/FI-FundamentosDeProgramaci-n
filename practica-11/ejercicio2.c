// Realizar un programa que permita obtener la transpuesta de una matriz. Se deberán crear las siguientes funciones Guarda_datos, Muestra_datos, acomoda_datos.
#include <stdio.h>

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
int main()
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
}
