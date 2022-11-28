// Realizar un programa que permita obtener la transpuesta de una matriz. Se deberán crear las siguientes funciones Guarda_datos, Muestra_datos, acomoda_datos.
#include <stdio.h>
#include <string.h>
float Guarda_datos(float matriz[][], int fil, int col)
{
    int i = 0, j = 0;
    printf("Inserte los datos de la matriz -> ");
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\n[%i][%i]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}
void Muestra_datos(float matriz[][], int fil, int col)
{
    int i = 0, j = 0;
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%f\n", matriz[i][j]);
        }
    }
}
float acomoda_datos(float matriz[][], float matriz2[][], int fil, int col){
    int i=0, j=0;
    for ( i = 0; i < fil; i++)
    {
        for ( j = 0; j < col; j++)
        {
            strcpy(matriz2[i][j], matriz[j][i]);
        }
        
    }
    
}
int main(){
    int fil, col;
    printf("Inserte la cantidad de filas para la matriz -> ");
    scanf("%i", &fil);
    printf("Inserte la cantidad de columnas para la matriz -> ");
    scanf("%i", &col);
    int matriz[fil][col], matriz2[fil][col];
    Guarda_datos(matriz, fil, col);
    acomoda_datos(matriz, matriz2, fil, col);
    Muestra_datos(matriz2, fil, col);
}
