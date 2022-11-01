#include <stdio.h>

int main()
{
    int i, j, k;

    for (j = 0; j <= 100; j++)
    {
        k = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (j % i == 0)
                k++;
        }
        if (k == 2)
        {
            printf("%d\n", j);
        }
    }
}