#include <stdio.h>

int main()
{
    int d1, d2, d3, c, dados;
    printf("Dame valores del dado 1: ");
    scanf("%i", &d1);
    printf("Dame valores del dado 2: ");
    scanf("%i", &d3);
    printf("Dame valores del dado 3: ");
    scanf("%i", &d2);
    if (d1 >= 1 && d1 <= 6 && d2 >= 1 && d2 <= 6 && d3 >= 1 && d3 <= 6)
    {
        if (d1 == 6)
            dados = dados + 1;
        if (d2 == 6)
            dados = dados + 1;
        if (d3 == 6)
            dados = dados + 1;
        if (dados == 3)
        {
            printf("Muy bien!!");
        }
        if (dados == 2)
        {
            printf("Bien!!");
        }
        if (dados == 1)
        {
            printf("Regular ._.");
        }
        if (dados == 0)
        {
            printf("Pesimo :/");
        }
    }
    else
    {
        printf("No valido :/");
    }
}
