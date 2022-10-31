/*  Utilizando un elemento de selección múltiple, realizar un programa que pregunte la fecha y que indique a que estación del año pertenece.*/
/*
1 Enero
2 Febrero
3 Marzo
4 Abril
5 Mayo
6 Junio
7 Julio
8 Agosto
9 Septiembre
10 Octubre
11 Noviembre
12 Diciembre
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia, mes;
    printf("Introduzca el d%ca: ", 161);
    scanf("%d", &dia);
    if (dia < 1 || dia > 31)
    {
        printf("D%ca incorrecto", 161);
        exit(0);
    }

    printf("Introduzca el mes: ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12)
    {
        printf("Mes incorrecto");
        exit(0);
    }

    printf("\nLa fecha %d/%d pertenece a la estacion -> ", dia, mes);
    if (mes == 1 || mes == 2 || mes == 12 && dia >= 21 || mes == 3 && dia <= 19)
        printf("Invierno");
    else if (mes == 3 && dia >= 20 || mes == 4 || mes == 5 || mes == 6 && dia <= 20)
        printf("Primavera");
    else if (mes == 6 && dia >= 21 || mes == 7 || mes == 8 || mes == 9 && dia <= 22)
        printf("Verano");
    else if (mes == 9 >= 23 || mes == 10 || mes == 11 || mes == 12 && dia <= 20)
        printf("Oto%co", 164);
    else
        printf("Mes incorrecto");
    return 0;
}
