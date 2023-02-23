#include <stdio.h>

struct marca
{
    char nombre[5][10];
} marca = {"BMW", "Ford", "Tesla", "Toyota", "Nissan"};

//Llene una matriz de 5 filas y 3 columnas con valores fijos de 0 a 10. Las filas representan marcas de autos y las columnas los meses del ultimo trimestre de 2022. Mostrar la matriz.

int main()
{
    int matriz[5][3];

    int i, j, flag = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            while (flag == 0)
            {
                printf("Ingrese el valor de la fila %d y columna %d: ", i + 1, j + 1);
                scanf("%d", &matriz[i][j]);
                if (matriz[i][j] >= 0 && matriz[i][j] <= 10)
                {
                    flag = 1;
                }
                else
                {
                    printf("El valor ingresado no es valido. Ingrese un valor entre 0 y 10.\n");
                }
            }
            flag = 0;
        }
        printf("\n");
    }

    // 1) Mostrar la matriz con los nombres de las marcas en la primera fila.

    printf("Marca\tEnero\tFebrero\tMarzo\nTotal\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t", marca.nombre[i]);
        for (j = 0; j < 3; j++)
        {
            printf("  %d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // 2) Calcular los totales de cada fila (marcas) y mostrarlos.
    int total = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            total += matriz[i][j];
        }
        printf("El total de la fila %d es: %d\n", i + 1, total);
        total = 0;
    }
    printf("\n\n");

    // 3) Calcular los totales de cada columna (meses) y mostrarlos.
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 5; i++)
        {
            total += matriz[i][j];
        }
        printf("El total de la columna %d es: %d\n", j + 1, total);
        total = 0;
    }

    return 0;
}
