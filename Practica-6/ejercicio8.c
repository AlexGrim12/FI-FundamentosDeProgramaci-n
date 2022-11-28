#include <stdio.h>
int main()
{
    float m1, m2, d, G = 9.81, F;
    printf("Ingrese la masa 1 (gramos): ");
    scanf("%f", &m1);
    printf("Ingrese la masa 2 (gramos): ");
    scanf("%f", &m2);
    printf("Ingrese la distancia (centimetros): ");
    scanf("%f", &d);
    F = G * m1 * m2 / (d*d);
    printf("La fuerza de atraccion expresada en dinas es igual a: %f", F);
}