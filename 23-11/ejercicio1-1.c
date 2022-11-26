#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dameDimension()
{
    int d;
    printf("Dame tamaño del vector -> ");
    scanf("%i", &d);
    return d;
}

float dameVector(int d)
{
    float v[d];
    printf("Dame datos del vector: \n");
    for (int i = 0; i < d; i++)
    {
        printf("Para %i -> ", i + 1);
        scanf("%f", &v[i]);
    }
    printf("%.2f \n", v[0]);
    printf("%.2f \n", v[1]);
    return v[d];
}

float funSuma(int d, float a[d], float b[d])
{
    float suma[d];
    for (int i = 0; i < d; i++)
    {
        suma[i] = a[i] + b[i];
    }
    for (int i = 0; i < d; i++)
    {
        printf("%.2f \t", suma[i]);
    }
    return suma[d];
}

float producto(int d, float a[d], float b[d])
{
    float producto = 0;
    for (int i = 0; i < d; i++)
    {
        producto += a[i] * b[i];
    }
    return producto;
}

int main()
{
    int d;
    float n1 = 1, n2 = 2;
    d = dameDimension();

    printf("Prueba %i\n", d); // prueba
    float a[d], b[d], suma[d];

    a[d] = dameVector(d);

    printf("%.2f \n", a[d]); // prueba
    printf("%.2f \n", a[1]); // prueba

    b[d] = dameVector(d);

    for (int i = 0; i < d; i++) // prueba
    {
        printf("%.2f \t", b[i]);
    }

    suma[d] = funSuma(d, a, b);
    printf("La suma de los vectores es -> ");
    for (int i = 0; i < d; i++)
    {
        printf("%.2f \t", suma[i]);
    }
    printf("El producto punto de los vectores es -> %.2f", producto(d, a, b));
    return 0;
}
