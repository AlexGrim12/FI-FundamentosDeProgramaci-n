// Realizar un programa que solicite al usuario la longitud y anchura de una habitación y a continuación visualice su superficie con cuatro decimales. Nota solo se deberán declarar dos variables. (No considerar condicionales)
#include <stdio.h>
int main()
{
    float longitud, anchura, superficie;
    printf("Ingrese la longitud de la habitaci%cn: ", 162);
    scanf("%f", &longitud);
    printf("Ingrese la anchura de la habitaci%cn: ", 162);
    scanf("%f", &anchura);
    superficie = longitud * anchura;
    printf("La superficie de la habitaci%cn es: %.4f unidades", 162, superficie);
    return 0;
}