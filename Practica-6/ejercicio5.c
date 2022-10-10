#include <stdio.h>
const int M = 6;
int main()
{
    int a, b, c;
    puts("Introduce el valor de a y de b");
    scanf("%d%d", &a, &b);
    c = 2 * a - b;
    printf("\n c= %d\n", c);
    c = -M;
    printf("\n c=%d\n", c);
    b = a + c - M;
    printf("\n b=%d\n", b);
    a = b * M;
    printf("\n a=%d\n", a);
    b = -1;
    printf(" b= %6d c= %6d \n", b, c);
    return 0;
}
