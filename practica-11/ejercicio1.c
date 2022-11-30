// Realizar una función llamada ultima, que toma una cadena de hasta 100 caracteres como parámetro, y devuelve el último carácter. Esa función debe devolver el último carácter si no es vacía (es decir, si tiene caracteres); si es vacía (“/0”) debe devolver e indicar que era vacía.
#include <stdio.h>

char ultima(char cadena[100])
{
    int i;
    for (i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i + 1] == '\0')
        {
            return cadena[i];
        }
    }
    return ' ';
}
int main()
{
    char cadena[100];
    printf("Ingrese una cadena de hasta 100 caracteres: ");
    scanf("%s", cadena);
    printf("El ultimo caracter es: %c", ultima(cadena));
    return 0;
}