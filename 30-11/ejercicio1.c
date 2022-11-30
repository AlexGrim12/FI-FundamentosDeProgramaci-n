#include <stdio.h>
int main()
{
    char C;
    int x;
    float y;

    printf("c: direccion = %p, contenido = %C \n", &C, C);
    printf("x: direction = %p, contenido = %d \n", &x, x);
    printf("y: direccion = %p, contenido = %5.2f \n", &y, y);
    C = 'A';
    x = 7;
    y = 123.45;
    printf("c: direccion = %p, contenido = %C \n", &C, C);
    printf("x: direction = %p, contenido = %d \n", &x, x);
    printf("y: direccion = %p, contenido = %5.2f \n", &y, y);
    return 0;
}