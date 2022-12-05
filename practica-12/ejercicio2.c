//Crea un programa que vaya leyendo las frases que elusuario teclea y las guarde en un fichero de texto llamado registroDeUsuario.txt”. Terminará cuando la frase introducida sea "fin" (esa frase no deberá guardarse en el fichero). Se deberá utilizar la siguiente función strcmp (arr_a, arr_b).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *archivo;
    char frase[100];
    archivo = fopen("registroDeUsuario.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    printf("Escribe una frase: ");
    gets(frase);
    while (strcmp(frase, "fin") != 0)
    {
        fprintf(archivo, "%s", frase);
        printf("Escribe una frase: ");
        gets(frase);
    }
    fclose(archivo);
    return 0;
}