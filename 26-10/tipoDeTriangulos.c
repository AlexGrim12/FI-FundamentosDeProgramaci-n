#include <stdio.h>
int main()
{
    float l1, l2, l3, lm;
    printf("Dame valores del laldo 1: ");
    scanf("%f", &l1);
    printf("Dame valores del lado 2: ");
    scanf("%f", &l2);
    printf("Dame valores del lado 3: ");
    scanf("%f", &l3);
    if (l1 != 0 && l2 != 0 && l3 != 0)
    {
        if (l1 > l2 && l1 > l3)
        {
            l1 = lm;
            l1 = l2;
            l2 = l3;
            l3 = 0;
        }
        else
        {
            if (l2 > l1 && l2 > l3)
            {
                l2 = lm;
                l1 = l2;
                l2 = l3;
                l3 = 0;
            }
            else
            {
                l3 = lm;
                l3 = 0;
            }
        }
        if ((l1 + l2) > lm)
        {
            if (l1 == l2 && l1 == lm)
            {
                printf("El triángulo es equilátero.");
            }
            else
            {
                if (l1 == l2 || l1 == lm || l2 == lm)
                {
                    printf("El triángulo es isóceles.");
                }
                else
                {
                    printf("El triángulo es escaleno.");
                }
            }
        }
        else
        {
            printf("Datos no válidos");
        }
    }
    else
    {
        printf("Datos no válidos");
    }
    return 0;
}
