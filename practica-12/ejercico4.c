//Realizar un programa que me permita ver en pantalla, el plan de estudios de tu carrera que estará previamente guardado en un archivo de texto. En caso de que no exista el archivo deberá enviar un mensaje de error.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo;
    char caracter;
    archivo = fopen("plan.txt", "r");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    while ((caracter = fgetc(archivo)) != EOF)
    {
        printf("%c", caracter);
    }
    fclose(archivo);
    return 0;
}