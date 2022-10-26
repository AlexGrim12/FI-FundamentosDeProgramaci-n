#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    for (i = 1; i < 100; i++)
    {
        if ((i % 3) == 0)
        {
            printf("%i\n", i);
        }
    }
    return 0;
}
