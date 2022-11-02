#include <stdio.h>
#include <math.h>

int programa1()
{
    int n, i = 0, num, sum = 0, mult = 0;
    float prom = 0;
    printf("%cCu%cntos n%cmeros quieres ingresar en el programa? -> ", 168, 160, 163);
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nIngresa el n%cmero %i -> ", 163, i + 1);
        scanf("%i", &num);
        if ((num % 2) == 0)
        {
            printf("\n%i es m%cltiplo de 2\n", num, 163);
            mult = mult + 1;
            sum = sum + num;
        }
        else
        {
            printf("\n%i no es m%cltiplo de 2\n", num, 163);
        }
    }

    printf("\nLa cantidad de n%cmeros multiplos fue de %i", 163, mult);

    prom = sum / mult;
    printf("\nEl promedio es: %.2f\n", prom);

    return 0;
}

int programa2()
{
    float res = 0, a = 2, b = 1, c = 1, sum = 0;
    int i;

    for (i = 0; i < 25; i++)
    {
        res = ((a / b) * c);
        a = a + 2;
        b = b + (4 + i);
        c = c * 2;
        sum = sum + res;
    }
    printf("La suma de la ecuaci%cn hasta z(25) es igual a: %.2f\n", 162, sum);
    return 0;
}

int programa3()
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
    return 0;
}

int programa4()
{
    int i;
  float x;
  double tot,fac=1;
  
  printf("Ingrese un número:\n");
  scanf("%f",&x);

  for (i=1;i<=100;i++)
    {
      fac=fac*i;
      tot=tot+(pow(x,i)/(fac));
    }

printf("La suma de cada uno de los valores de 1 a 100 es: %.10f\n",tot+1);
}

int opciones()
{
    printf("\n\n%cQu%c desea realizar? 1. Repetir este programa 2. Ir al men%c 3. Salir -> ", 168, 130, 163);
    return 0;
}

int main()
{
rprograma5:
    int op_g, r;
    printf("1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n6. Salir\n");
    printf("\n%cQu%c programa desea ejecutar? -> ", 168, 130);
    scanf("%i", &op_g);
    switch (op_g)

    {
    case 1:
    rprograma1:
        programa1();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma1;
        }
        else if (r == 2)
        {
            goto rprograma5;
        }
        break;
    case 2:
    rprograma2:
        programa2();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma2;
        }
        else if (r == 2)
        {
            goto rprograma5;
        }
        break;
    case 3:
    rprograma3:
        programa3();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rprograma3;
        }
        else if (r == 2)
        {
            goto rprograma5;
        }
        break;
    case 4:

        break;
    case 5:
        goto rprograma5;
        break;
    case 6:
        printf("\nSaliendo...");
        break;
    default:
        printf("Opci%cn no v%clida", 162, 160);
        break;
    }
    printf("\n\nGracias por usar el programa");
    return 0;
}
