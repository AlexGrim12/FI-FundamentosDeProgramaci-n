// La fuerza de atracción entre dos masas, m1 y m2 separadas por una distancia d, está dada por la fórmula:
// F = G * m1 * m2 / d^2
// la salida del programa debe ser en dinas.
#include <stdio.h>
#include <math.h>
int main()
{
    float m1, m2, d, G = 9.81, F;
    printf("Ingrese la masa 1 (gramos): ");
    scanf("%f", &m1);
    printf("Ingrese la masa 2 (gramos): ");
    scanf("%f", &m2);
    printf("Ingrese la distancia (centimetros): ");
    scanf("%f", &d);
    F = G * m1 * m2 / pow(d, 2);
    printf("La fuerza de atraccion expresada en dinas es igual a: %f", F);
    return 0;
}