// Se requiere obtener la raíz cuadrada, el exponencial, el logaritmo natural y las tres funciones trigonométricas de un número inicializado. Mediante llamadas a funciones.
#include <stdio.h>
#include <math.h>
int main()
{
    float numero;
    printf("Ingrese el numero: ");
    scanf("%f", &numero);
    printf("La raiz cuadrada es: %f, el exponencial es: %f, el logaritmo natural es: %f, el seno es: %f, el coseno es: %f y la tangente es: %f", sqrt(numero), exp(numero), log(numero), sin(numero), cos(numero), tan(numero));
    return 0;
}