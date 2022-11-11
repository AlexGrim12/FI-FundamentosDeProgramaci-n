// solicitar 5 datos al usuario y guardarlos en un arreglo
#include <stdio.h>
int main()
{
    int i;
    float arreglo[5], suma;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &arreglo[i]);
    }

    printf("Los numeros ingresados son: ");
    for (i = 0; i < 5; i++)
    {
        printf("%f ", arreglo[i]);
    }

    arreglo[3] = 1000;

    printf("Los numeros ingresados son: ");
    for (i = 0; i < 5; i++)
    {
        printf("%f ", arreglo[i]);
        suma = suma + arreglo[i];
    }
    printf("La suma es: %f", suma);
    return 0;
}