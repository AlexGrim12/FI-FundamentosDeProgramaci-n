#include <stdio.h>
const int M = 6;
int main()
{

    int a, b, c;
    puts("Introduce el valor de a y de b");
    scanf("*%d %d", &a, &b);
    c = 2 * a - b;
    printf("\n c= %d\n", c);
    c = -M;
    printf("\n c=%d\n", c);
    b = a + c - M;
    a = b * M;
    b = -1;
    printf(" b= %6d C- %6d \n", b, c);
    return 0;
}
