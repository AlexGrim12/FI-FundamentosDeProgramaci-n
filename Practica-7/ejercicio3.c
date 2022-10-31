/*Realizar un menú con diez opciones, donde cada opción
permitirá realizar una función matemática (math.h)
diferente.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int op;
    float a;
    printf("Introduzca el n%cmero: ", 163);
    scanf("%f", &a);

    printf(" 1. Calcular el valor absoluto de un n%cmero\n 2. Calcular el seno de un %cngulo\n 3. Calcular el coseno de un %cngulo\n 4. Calcular la tangente de un %cngulo\n 5. Calcular la ra%cz cuadrada de un n%cmero\n 6. Calcular la ra%cz c%cbica de un n%cmero\n 7. Calcular el logaritmo natural de un n%cmero\n 8. Calcular el logaritmo en base 10 de un n%cmero\n 9. Calcular el exponencial de un n%cmero\n10. Calcular el valor de pi\n11. Salir\n", 163, 160, 160, 160, 161, 163, 161, 163, 163, 163, 163, 163);

    printf("Introduzca la opci%cn: ", 162);
    scanf("%d", &op);
    if (op < 1 || op > 11)
    {
        printf("Opci%cn incorrecta", 162);
        exit(0);
    }
    switch (op)
    {
    case 1:
        printf("El valor absoluto de %f es %f", a, fabs(a));
        break;
    case 2:
        printf("El seno de %f es %f radianes", a, sin(a));
        break;
    case 3:
        printf("El coseno de %f es %f radianes", a, cos(a));
        break;
    case 4:
        printf("La tangente de %f es %f radianes", a, tan(a));
        break;
    case 5:
        printf("La ra%cz cuadrada de %f es %f", 161, a, sqrt(a));
        break;
    case 6:
        printf("La ra%cz c%cbica de %f es %f", 161, 163, a, cbrt(a));
        break;
    case 7:
        printf("El logaritmo natural de %f es %f", a, log(a));
        break;
    case 8:
        printf("El logaritmo en base 10 de %f es %f", a, log10(a));
        break;
    case 9:
        printf("El exponencial de %f es %f", a, exp(a));
        break;
    case 10:
        printf("El valor de pi es %f", M_PI);
        break;
    case 11:
        printf("Saliendo...");
        break;
    default:
        printf("Opci%cn incorrecta", 162);
        break;
    }
    return 0;
}