/*
Integrantes:
Acosta Porcayo Alan Omar
Chavarria Contreras Leopoldo Misael
Gutiérrez Grimaldo Alejandro
Gandarilla Ibarra Augusto
Medina Villa Samuel
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct libros
{
    char nombre[30];
    char autor[50];
    char editorial[30];
    int paginas;
    float precio;
};

struct libros bibilioteca[100];

void Ingresa_Datos(int i)
{

    printf("Ingrese el nombre del libro: ");
    gets(bibilioteca[i].nombre);
    printf("Ingrese el autor del libro: ");
    gets(bibilioteca[i].autor);
    printf("Ingrese la editorial del libro: ");
    gets(bibilioteca[i].editorial);
    printf("Ingrese el numero de paginas del libro: ");
    scanf("%d", &bibilioteca[i].paginas);
    printf("Ingrese el precio del libro: ");
    scanf("%f", &bibilioteca[i].precio);
}

void Ver_Datos(int i)
{
    for (int j = 0; j <= i; j++)
    {
        printf("Libro %d:\n", j + 1);
        printf("Nombre del libro: %s \nAutor: %s \nEditorial: %s \naginas: %d \nPrecio: %.2f\n\n", bibilioteca[j].nombre, bibilioteca[j].autor, bibilioteca[j].editorial, bibilioteca[j].paginas, bibilioteca[j].precio);
    }
}

void Crear_Archivo(int i)
{
    FILE *archivo;
    archivo = fopen("Libros.xls", "a");
    for (int j = 0; j <= i; j++)
    {
        fprintf(archivo, "Libro %d:\n", j + 1);
        fprintf(archivo, "Nombre del libro: %s \nAutor: %s \nEditorial: %s \naginas: %d \nPrecio: %.2f\n\n", bibilioteca[j].nombre, bibilioteca[j].autor, bibilioteca[j].editorial, bibilioteca[j].paginas, bibilioteca[j].precio);
        fflush(stdin);
    }
    fclose(archivo);
}

int main()
{
    int op, op2, i = 0;

inicio:
    printf("\nMenu\n");
    printf("1) Ingresar datos\n");
    printf("2) Ver datos\n");
    printf("3) Crear archivo\n");
    printf("\nSeleccione una opcion:    \n");
    scanf("%d", &op);
    fflush(stdin);
    printf("\n");

    switch (op)
    {
    case 1:
    {
    Ingresa_Datos:
        Ingresa_Datos(i);

        printf("\n1) Volver a introducir datos\n");
        printf("2) Regresar al menu\n");
        printf("3) Salir\n");
        scanf("%d", &op2);
        printf("\n");
        fflush(stdin);

        if (op2 == 1)
        {
            i++;
            goto Ingresa_Datos;
        }
        else if (op2 == 2)
            goto inicio;
        else
            exit(0);
    }
    case 2:
    {
    Ver_Datos:
        Ver_Datos(i);

        printf("\n1) Regresar al menu    \n");
        printf("2) Salir    \n");
        scanf("%d", &op2);
        printf("\n");

        if (op2 == 1)
            goto inicio;
        else
            exit(0);
    }
    case 3:
    {
    Crear_Archivo:
        Crear_Archivo(i);

        printf("\n1) Regresar al menu\n");
        printf("2) Salir\n");
        scanf("%d", &op2);
        printf("\n");

        if (op2 == 1)
            goto inicio;
        else
            exit(0);
    }
    }

    return 0;
}