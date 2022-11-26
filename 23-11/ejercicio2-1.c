#include <stdio.h>

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
    printf("Dame datos del vector");
    for (int i = 0; i < d; i++)
    {
        scanf("%f", &v[i]);
    }
    return v[d];
}

float burbuja(int d, float a[d])
{
    float aux;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (a[j] > a[j + 1])
            {
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
    return a[d];
}

int main()
{
    int d;
    d = dameDimension();
    float a[d];
    a[d] = dameVector(d);
    burbuja(d, a);
    printf("El vector ordenado es -> ");
    for (int i = 0; i < d; i++)
    {
        printf("%.2f \t", a[i]);
    }
    return 0;
}
