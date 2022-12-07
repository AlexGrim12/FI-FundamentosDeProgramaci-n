// Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un fichero de texto llamado registroDeUsuario.txt”. Terminará cuando la frase introducida sea "fin" (esa frase no deberá guardarse en el fichero). Se deberá utilizar la siguiente función strcmp (arr_a, arr_b).

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *archivo;
    char frase[100], fin[] = "fin ";
    archivo = fopen("registroDeUsuario.txt", "w+");

    printf("Ingrese frases a continuacion:\n");
    gets(frase);

    while (strcmp(frase, fin) != 0)
    {
        fprintf(archivo, "%s\n", frase);
        gets(frase);
    }
    fclose(archivo);

    return 0;
}