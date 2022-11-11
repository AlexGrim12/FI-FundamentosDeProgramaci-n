#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int seleccion = 0;
    int salir = 0;

    do
    {

        system("cls");
        printf("######################################## \n");
        printf("   Selecciona un programa de la lista \n");
        printf("######################################## \n");

        printf("\n 1) Ejercicio 1 ");
        printf("\n 2) Ejercicio 2 ");
        printf("\n 3) Ejercicio 3 ");
        printf("\n 4) Ejercicio 4 ");

        printf("\n\n Ingresa tu elección: \t");
        scanf("%d", &seleccion);

        switch (seleccion)
        {
        case 1:
        {
            system("cls");
            /* ######## PROGRAMA 1######*/

            int n, i, j, t;

            printf("Dame la cantidad de alumnos: \n");
            scanf("%i", &n);
            printf("\n");

            int edad[n];
            char nombre[n][100], temp[1][100];

            for (i = 0; i < n; i++)
            {
                printf("Dame nombre del alumno %i: \n", (i + 1));
                scanf("%s", nombre[i]);

                printf("Dame edad del alumno %i: \n", (i + 1));
                scanf("%i", &edad[i]);
                printf("\n");
            }

            for (i = 1; i < n; i++)
            {
                for (j = 0; j < n - i; j++)
                {
                    if (edad[j] > edad[j + 1])
                    {
                        t = edad[j];
                        edad[j] = edad[j + 1];
                        edad[j + 1] = t;

                        strcpy(temp[0], nombre[j + 1]);
                        strcpy(nombre[j + 1], nombre[j]);
                        strcpy(nombre[j], temp[0]);
                    }
                }
            }

            for (i = 0; i < n; i++)
            {
                printf("El alumno %i se llama: \n %s", (i + 1), nombre[i]);
                printf("\n");
                printf("y tiene %i años \n", edad[i]);
                printf("\n");
                printf("\n");
            }

            // ####### FIN PROGRAMA 1###### //

            printf("¿Deseas salir del programa?");
            scanf("%d", &salir);
            break;
        }

        case 2:
        {
            system("clear");
            /* ################################## PROGRAMA 2 ################################*/

            int tamanio = 0, numero = 0;

            printf("Ingresa el tamaño del arreglo : \t");
            scanf("%d", &tamanio);
            printf("Ingresa ahora el número base: \t");
            scanf("%d", &numero);

            int arreglo[tamanio];

            for (int i = 0; i < tamanio; i++)
            {
                arreglo[i] = numero * (i + 1);
            }

            printf("[ ");
            for (int i = 0; i < tamanio; i++)
            {
                printf("  %d  ", arreglo[i]);
            }
            printf(" ]");

            /* ############################## TERMINA PROGRAMA 2 ########################### */
            printf("\n\n¿Deseas salir del programa?");
            scanf("%d", &salir);
            break;
        }

        case 3:
        {
            system("clear");
            /* ################################## PROGRAMA 3 ################################*/

            char cadena[100];
            int contadorLetras = 0, i = 0;

            printf("Ingresa la cadena: \t");
            getchar();
            fgets(cadena, 100, stdin);

            while (cadena[i] != '\0')
            {

                if (cadena[i] >= 'a' && cadena[i] <= 'z')
                {
                    contadorLetras++;
                }
                i++;
            }

            printf("%d letras minusculas", contadorLetras);

            /* ############################## TERMINA PROGRAMA 3 ########################### */
            printf("\n\n¿Deseas salir del programa?");
            scanf("%d", &salir);
            break;
        }

        case 4:
        {
            system("clear");
            /* ################################## PROGRAMA 4 ################################*/

            int tamanio = 0;

            printf("Ingresa el tamaño del arreglo : \t");
            scanf("%d", &tamanio);

            char nombresPersonas[tamanio][50];
            int longitud[tamanio];

            getchar();

            for (int i = 0; i < tamanio; i++)
            {
                printf("Ingresa el nombre de persona %d: \t", i + 1);
                fgets(nombresPersonas[i], 50, stdin);
                longitud[i] = strlen(nombresPersonas[i]) - 1;
            }

            for (int i = 0; i < tamanio; i++)
            {
                printf("CADENA %i: \n > Contenido: %s \n > Tamaño [sin final de cadena]: %d \n\n\n", i + 1, nombresPersonas[i], longitud[i]);
            }
            /* ############################## TERMINA PROGRAMA 4 ########################### */
            printf("\n\n¿Deseas salir del programa?");
            scanf("%d", &salir);
            break;
        }

        default:
            break;
        }

    }

    while (salir != 1);
    return 0;
}