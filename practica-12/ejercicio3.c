//Se desea obtener un listado de n jugadores de futbol donde se deberá incluir su nombre, su posición y el estado de salud. Se podrá realizar mediante una selección (switch - case) con al menos 4 opciones (ejem. excelente, buena, regular, pésima). Dicha información se deberá poder visualizar en un archivo de texto. En el archivo de texto se podrán visualizar los nuevos registros añadidos así como los anteriores.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *archivo;
    int op;
    archivo = fopen("jugadores.txt", "a");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
menu:
    printf("1. Insertar jugador \n2. Ver jugadores \n3. Salir \n");
    printf("Selecciona una opcion -> ");

    gets(op);
    switch (op)
    {
    case 1:
        char nombre[100];
        char posicion[100];
        char estado[100];
        int op;
        printf("Escribe el nombre del jugador -> ");
        gets(nombre);
        printf("Escribe la posicion del jugador -> ");
        gets(posicion);
        printf("Selecciona el estado de salud del jugador -> ");
        printf("1. Excelente \n2. Buena \n3. Regular \n4. Pesima ");
        gets(op);
        switch (op)
        {
        case 1:
            strcpy(estado, "Excelente");
            break;
        case 2:
            strcpy(estado, "Buena");
            break;
        case 3:
            strcpy(estado, "Regular");
            break;
        case 4:
            strcpy(estado, "Pesima");
            break;
        default:
            printf("Opcion no valida");
            break;
        }
        fprintf(archivo, "%s %s %s", nombre, posicion, estado);
        fclose(archivo);
        break;
    case 2:
        char caracter;
        archivo = fopen("jugadores.txt", "r");
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
        break;
    default:
        printf("Opcion no valida");
        break;
    }
    goto menu;
    printf("Gracias por usar el programa :)");

    return 0;
}