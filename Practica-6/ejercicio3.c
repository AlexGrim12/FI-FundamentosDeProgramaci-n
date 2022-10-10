// Realizar un programa que solicite al usuario la longitud y anchura de una habitación y a continuación visualice su superficie con cuatro decimales. Nota solo se deberán declarar dos variables. (No considerar condicionales)
#include <stdio.h>
int main()
{
    float longitud, anchura, superficie;
    printf("Ingrese la longitud de la habitacion: ");
    scanf("%f", &longitud);
    printf("Ingrese la anchura de la habitacion: ");
    scanf("%f", &anchura);
    superficie = longitud * anchura;
    printf("La superficie de la habitacion es: %.4f m^2", superficie);
    return 0;
}