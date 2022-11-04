// Nombre que solicita nombre y edad, los guarda en un arreglo
#include <stdio.h>
#include <string.h>
int main()
{
    char nombre[5][100];
    int edad[5], i;
    for (i = 0; i < 5; i++)
    {
        int a = i + 1;
        printf("Nombre del alumno -> ");
        scanf("%s", nombre[i]);
        printf("Edad del alumno -> ");
        scanf("%i", &edad[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Alumno %i \n%s %i\n\n", i + 1, nombre[i], edad[i]);
    }

    strcpy(nombre[4], "Susana");
    printf("---------------------------------------------------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("Alumno %i \n%s %i\n\n", i + 1, nombre[i], edad[i]);
    }

    return 0;
}
