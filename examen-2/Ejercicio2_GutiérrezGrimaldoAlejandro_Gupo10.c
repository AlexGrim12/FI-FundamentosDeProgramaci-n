#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracteres[50];
    int i = 0;
    printf("Inserte los caracteres que desee ivertir -> ");
    scanf("%s", caracteres);
    printf("Los caracteres invertidos son -> ");
    for (i = strlen(caracteres); i >= 0; i--)
    {
        printf("%c", caracteres[i]);
    }
}