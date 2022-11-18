// calculadora on funciones

#include <stdio.h>

int suma(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}

int resta(int a, int b)
{
    int resultado;
    resultado = a - b;
    return resultado;
}

int multiplicacion(int a, int b)
{
    int resultado;
    resultado = a * b;
    return resultado;
}

int division(int a, int b)
{
    int resultado;
    resultado = a / b;
    return resultado;
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
    int a, b, resultado;
    char operacion;
    printf("Ingresa la operacion a realizar (+, -, *, /) -> ");
    scanf("%c", &operacion);
    a = dame_numero();
    b = dame_numero();
    switch (operacion)
    {
    case '+':
        resultado = suma(a, b);
        break;
    case '-':
        resultado = resta(a, b);
        break;
    case '*':
        resultado = multiplicacion(a, b);
        break;
    case '/':
        resultado = division(a, b);
        break;
    default:
        printf("Operacion no valida");
        break;
    }
    printf("El resultado es %i", resultado);
    return 0;
}
