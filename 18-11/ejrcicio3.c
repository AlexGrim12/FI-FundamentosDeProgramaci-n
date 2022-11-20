// compara el número mayor de tres números con funciones
#include <stdio.h>
int mayor(int a, int b, int c)
{
    int mayor;
    if (a > b && a > c)
    {
        mayor = a;
    }
    else if (b > a && b > c)
    {
        mayor = b;
    }
    else
    {
        mayor = c;
    }
    return mayor;
}

int dame_numero()
{
    int numero;
    printf("Ingresa un numero -> ");
    scanf("%i", &numero);
    return numero;
}

int main()
{
    int a, b, c, mayor;
    a = dame_numero();
    b = dame_numero();
    c = dame_numero();
    mayor = mayor(a, b, c);
    printf("El numero mayor es %i", mayor);
    return 0;
}
