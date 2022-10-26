#include <stdio.h>
int main()
{
    int a, op, r;
    float n1, n2, n3;

inicio:
    printf("(1) Suma\n");
    printf("(2) Resta\n");
    printf("(3) Multiplicaci%cn\n", 162);
    printf("(4) Divisi%cn\n", 162);
    printf("\nSeleccione una opci%cn -> ", 162);
    scanf("%i", &a);
    switch (a)
    {
    case 1:
        printf("Dame el valor 1: ");
        scanf("%f", &n1);
        printf("Dame el valor 2: ");
        scanf("%f", &n2);
        n3 = n1 + n2;
        printf("\n%.2f + %.2f es igual a %.2f", n1, n2, n3);
        break;
    case 2:
        printf("Dame el valor 1: ");
        scanf("%f", &n1);
        printf("Dame el valor 2: ");
        scanf("%f", &n2);
        n3 = n1 - n2;
        printf("\n%.2f - %.2f es igual a %.2f", n1, n2, n3);
        break;
    case 3:
        printf("Dame el valor 1: ");
        scanf("%f", &n1);
        printf("Dame el valor 2: ");
        scanf("%f", &n2);
        n3 = n1 * n2;
        printf("\n%.2f X %f es igual a %.2f", n1, n2, n3);
        break;
    case 4:
        printf("Dame el valor 1: ");
        scanf("%f", &n1);
        printf("Dame el valor 2: ");
        scanf("%f", &n2);
        printf("(1) n1 / n2");
        printf("(2) n2 / n1");
        scanf("%i", &op);
        if (op == 1)
        {
            if (n2 == 0)
            {
                printf("\nNo se puede dividir entre cero");
            }
            else
            {
                n3 = n1 / n2;
                printf("\n%.2f / %.2f es igual a %.2f", n1, n2, n3);
            }
        }
        else
        {
            if (n1 == 0)
            {
                printf("\nNo se puede dividir entre cero");
            }
            else
            {
                n3 = n2 / n1;
                printf("\n%.2f / %.2f es igual a %.2f", n2, n1, n3);
            }
        }
    default:
        printf("\nValor no reconocido");
        break;
    }
    printf("\n\n%cQuiere repetir el programa? \n\nS%c = 1 No = 2 -> ", 168, 161);
    scanf("%i", &r);
    printf("\n");
    if (r == 1)
    {
        goto inicio;
    }
    printf("Saliendo del programa...");
    return 0;
}
