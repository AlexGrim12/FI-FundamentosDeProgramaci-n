//	Cierta empresa quiere controlar la existencia de 10 productos, los cuales se almacenaran en un arreglo "a",
//	mientras que los pedidos de los clientes de estos procductos se almacenana en un arreblo "b". Se requiere generar
//	un tercer vector llamado "c", con base en los anteriores que represente lo que se ncesita comprar para mantener
//	el stock de inventario, para esto se considera lo siguiente:
//		- si los valores correspondientes de los vectores "a" y "b", se almacena este mismo valor
//		- si el valor de b es mayor que el de a, se almacena el doble de la diferncia entre b y a
//		- si se da el caso de que a es mayo que b, se almacena b
//	Realizar un programa que se permita visualizar lo que se requiere comprar para mantener el stock del inventario
#include <stdio.h>
int main()
{
    int i, a[10], b[10], c[10];
    for (i = 0; i < 10; i++)
    {
        printf("Dime la cantidad del producto %i: ", i + 1);
        scanf("%i", &a[i]);
        printf("Dime la cantidad de pedidos del producto %i: ", i + 1);
        scanf("%i", &b[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (b[i] > a[i])
        {
            c[i] = ((b[i] - a[i]) * 2);
        }
        else
        {
            c[i] = b[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n\nLa cantidad del  producto %i es: %i y la cantidad de pedidos es: %i el stock faltante es: %i", i + 1, a[i], b[i], c[i]);
    }

    return 0;
}
