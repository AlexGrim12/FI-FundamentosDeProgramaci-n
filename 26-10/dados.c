#include <stdio.h>

int main()
{
    int d1, d2, d3;
    printf("Dame valores del dado 1: ");
    scanf("%i", &d1);
    printf("Dame valores del dado 2: ");
    scanf("%i", &d3);
    printf("Dame valores del dado 3: ");
    scanf("%i", &d2);
    if (d1 >= 1 && d1 <= 6 && d2 >= 1 && d2 <= 6 && d3 >= 1 && d3 <= 6)
    {
        if ((d1 + d2 + d3) == 18)
        {
            printf("Muy bien!!");
        }
        else
        {
            if ((d1 + d2) == 12 || (d1 + d3) == 12 || (d2 + d3) == 12)
            {
                printf("Bien!!");
            }
            else
            {
                if (d1 == 6 || d2 == 6 || d3 == 6)
                {
                    printf("Regular ._.");
                }
                else
                {
                    printf("Pesimo :(");
                }
            }
        }
    }
    else
    {
        printf("No valido :/");
    }
}
