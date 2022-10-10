// Un sistema de ecuaciones lineales ax + by = c | dx + ey = f
#include <stdio.h>
float a, b, c, d, e, f, x, y;
int main()
{
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);
    printf("Ingrese el valor de d: ");
    scanf("%f", &d);
    printf("Ingrese el valor de e: ");
    scanf("%f", &e);
    printf("Ingrese el valor de f: ");
    scanf("%f", &f);
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    printf("El valor de x es: %f", x);
    printf("El valor de y es: %f", y);
    return 0;
}