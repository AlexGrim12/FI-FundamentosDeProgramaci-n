/*Crear un programa que identifique que un número es + - ò 0*/
#include <stdio.h>
int main()
{
    float n;
    printf("Dame un número ->");
    scanf("%f", &n);
    if (n > 0)
    {
        printf("El valor es positivo");
    }
    else
    {
        if (n == 0)
        {
            printf("El valor es cero");
        }
        else
        {
            printf("El valor es negativo");
        }
    }

    return 0;
}
