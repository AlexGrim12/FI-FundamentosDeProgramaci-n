// solicitar 5 datos al usuario y guardarlos en un arreglo
#include <stdio.h>
int main()
{
    int i, arreglo[5];
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &arreglo[i]);
    }
    printf("Los numeros ingresados son: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i ", arreglo[i]);
    }
    return 0;
}