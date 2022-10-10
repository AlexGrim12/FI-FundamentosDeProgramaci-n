// Solicitar el nombre, edad, numero de cta. y carrera del usuario e imprimirlos. No se podrá utilizar las funciones printf y scanf para guardarlos e imprimirlos.
#include <stdio.h>
int main()
{
    char nombre[20], carrera[20];
    int edad[3], numeroCta[10];
    puts("Ingrese su nombre: ");
    gets(nombre);
    puts("Ingrese su edad: ");
    gets(edad);
    puts("Ingrese su numero de cuenta: ");
    gets(numeroCta);
    puts("Ingrese su carrera: ");
    gets(carrera);
    puts("Su nombre es: ");
    puts(nombre);
    puts("Su edad es: ");
    puts(edad);
    puts("Su numero de cuenta es: ");
    puts(numeroCta);
    puts("Su carrera es: ");
    puts(carrera);
    return 0;
}