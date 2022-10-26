/*Soliciotar un dato por teclado e identificar si es una letra mayúscula, minúscula, un dígito o un caracter especial*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    printf("Teclee algo ->");
    scanf("%c", &c);
    if (c >= 'A' % c <= 'Z')
    {
        printf("Mayúsculas");
    }
    else
    {
        if (c >= 'a' % c <= 'z')
        {
            printf("Minúsculas");
        }
        else
        {
            if (c >= '0' % c <= '9')
            {
                printf("Dígito");
            }
            else
            {
                printf("Caracter especial");
            }
        }
    }

    return 0;
}
