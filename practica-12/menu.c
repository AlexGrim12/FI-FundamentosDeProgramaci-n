#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu()
{
    int o;

    printf("Menu\n");
    printf("1) Ejercicio 1\n");
    printf("2) Ejercicio 2\n");
    printf("3) Ejercicio 3\n");
    printf("4) Ejercicio 4\n");
    printf("\nSeleccione una opcion:\n");
    scanf("%d", &o);
    printf("\n");

    return o;
}

int retorno()
{
    int e;

    printf("\nDeseas salir del programa?\n");
    printf("1) Repetir ejercicio\n");
    printf("2) Regresar al menu\n");
    printf("3) Salir\n");

    scanf("%d", &e);
    printf("\n");

    return e;
}

void ejercicio1()
{
    int n1, n2, r;
    int *ap_n1, *ap_n2, *ap_r;
    char mensaje1[] = "Direccion y contenido del primer numero\n";
    char mensaje2[] = "Direccion y contenido del segundo numero\n";
    char mensaje3[] = "Direccion y contenido de la suma\n";
    FILE *apFile;

    printf("Dame un numero entero:\n");
    scanf("%d", &n1);
    printf("\nDame otro numero entero:\n");
    scanf("%d", &n2);
    r = n1 + n2;
    printf("\nEl resultado es: %d\n", r);

    ap_n1 = &n1;
    ap_n2 = &n2;
    ap_r = &r;

    apFile = fopen("registroDirCont.txt", "w");

    fputs(mensaje1, apFile);
    fprintf(apFile, "%p\t %d\n\n", ap_n1, n1);
    fputs(mensaje2, apFile);
    fprintf(apFile, "%p\t %d\n\n", ap_n2, n2);
    fputs(mensaje3, apFile);
    fprintf(apFile, "%p\t %d\n\n", ap_r, r);
    fclose(apFile);
    printf("\nSe creo archivo con exito");
    return 0;
}

void ejercicio2()
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
    scanf("%s", frase);
    while (strcmp(frase, "fin") != 0)
    {
        fprintf(archivo, "%s\n", frase);
        printf("Escribe una frase: ");
        scanf("%s", frase);
    }
    fclose(archivo);
    return 0;
}

void ejercicio3()
{
rep:
    FILE *archivo;

    char nombre[100] = "", posicion[100] = "", estado[100] = "", repetir[1];

    int op;

    archivo = fopen("jugadores.txt", "a");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }

    printf("Escribe el nombre del jugador -> ");
    scanf("%s", nombre);
    printf("Escribe la posicion del jugador -> ");
    scanf("%s", posicion);

    printf("1. Excelente \n2. Buena \n3. Regular \n4. Pesima \n");
    printf("Selecciona el estado de salud del jugador -> ");
    scanf("%i", &op);
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
    fprintf(archivo, "%s %s %s\n", nombre, posicion, estado);
    fclose(archivo);

    printf("Desea insertar otro jugador? (s/n) -> ");
    scanf("%s", repetir);

    if (strcmp(repetir, "s") == 0)
    {
        goto rep;
    }
    else
    {
        printf("Gracias por usar el programa :)");
    }

    return 0;
}

void ejercicio4()
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

int main()
{
    int op1, op2;

inicio:
    op1 = menu();

    switch (op1)
    {
    case 1:
    {
    ejercicio1:
        ejercicio1();

        op2 = retorno();
        if (op2 == 1)
            goto ejercicio1;
        else if (op2 == 2)
            goto inicio;
    }
    break;

    case 2:
    {
    ejercicio2:
        ejercicio2();

        op2 = retorno();
        if (op2 == 1)
            goto ejercicio2;
        else if (op2 == 2)
            goto inicio;
    }
    break;

    case 3:
    {
    ejercicio3:
        ejercicio3();

        op2 = retorno();
        if (op2 == 1)
            goto ejercicio3;
        else if (op2 == 2)
            goto inicio;
    }
    break;

    case 4:
    {
    ejercicio4:
        ejercicio4();

        op2 = retorno();
        if (op2 == 1)
            goto ejercicio4;
        else if (op2 == 2)
            goto inicio;
    }
    break;

    default:
        printf("\nValor no valido\n");
        break;
    }
}