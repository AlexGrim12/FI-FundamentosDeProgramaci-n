// Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un fichero de texto llamado registroDeUsuario.txt”. Terminará cuando la frase introducida sea "fin" (esa frase no deberá guardarse en el fichero). Se deberá utilizar la siguiente función strcmp (arr_a, arr_b).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *archivo;
    char frase[100], fin[] = "fin";
    archivo = fopen("registroDeUsuario.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    printf("\nEscribe una frase -> ");

    do
    {
        gets(frase);
        if (strcmp(frase, fin) == 0)
        {
            break;
        }
        fprintf(archivo, "%s\n", frase);
    } while (strcmp(frase, fin) != 0);
    fclose(archivo);
    return 0;
}