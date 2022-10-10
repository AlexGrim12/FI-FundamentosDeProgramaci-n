#include <stdio.h>
int main()
{
    float m, cm, pulg, pies, yardas;
    printf("Ingrese el valor de metros: ");
    scanf("%f", &m);
    cm = m * 100;
    pulg = m * 39.37;
    pies = m * 3.281;
    yardas = m * 1.094;
    printf("El valor de centimetros es: %f\n", cm);
    printf("El valor de pulgadas es: %f\n", pulg);
    printf("El valor de pies es: %f\n", pies);
    printf("El valor de yardas es: %f", yardas);
    return 0;
}