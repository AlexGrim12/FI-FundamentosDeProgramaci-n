#include <stdio.h>
int main()
{
    int a, op, r;
    float n1, n2, n3;
{
inicio:
}
    printf("(1) Suma");
    printf("(2) Resta");
    printf("(3) Multiplicaci�n");
    printf("(4) Divisi�n");
    scanf("%i", &a);
    switch (a)
    {
    case 1:
        printf("Dame valores: ");
        scanf("%f %f", n1, n2);
        n3 == n1 + n2;
        printf("%f + %f es igual a %f", n1, n2, n3);
        break;
    case 2:
        printf("Dame valores: ");
        scanf("%f %f", n1, n2);
        n3 == n1 - n2;
        printf("%f - %f es igual a %f", n1, n2, n3);
        break;
    case 3:
        printf("Dame valores: ");
        scanf("%f %f", n1, n2);
        n3 == n1 *n2;
        printf("%f X %f es igual a %f", n1, n2, n3);
        break;
    case 4:
        printf("Dame valores: ");
        scanf("%f %f", n1, n2);
        printf("(1) n1 / n2");
        printf("(2) n2 / n1");
        scanf("%i", op);
        if (op == 1)
        {
            if (n2 == 0)
            {
                printf("No se puede dividir entre cero");
            }
            else
            {
                n3 == n1 / n2;
                printf("%f / %f es igual a %f", n1, n2, n3);
            }
            else
            {
                if (n1 == 0)
                {
                    printf("No se puede dividir entre cero");
                }
                else
                {
                    n3 == n2 / n1;
                    printf("%f / %f es igual a %f", n2, n1, n3);
                }
            }
        }
    default:
        printf("Valor no reconocido");
        break;
    }
    printf("Quiere repetir el programa? s/n \n");
    scanf("%i", r);
    if (r == 1)

    {
        goto(inicio);
    }

    return 0;
}
