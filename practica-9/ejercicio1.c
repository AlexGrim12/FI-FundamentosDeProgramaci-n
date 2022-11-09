#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,t;

    printf("Dame la cantidad de alumnos -> ");
    scanf("%i",&n);

    int edad[n];
    char nombre[n][100],temp[1][100];

    for ( i = 0; i < n; i++)
    {
        printf("\nDame nombre del alumno %i -> ",(i+1));
        scanf("%s",nombre[i]);
    
        printf("\nDame edad del alumno %i -> ",(i+1));
        scanf("%i",&edad[i]);
    }
    
    for (i = 1; i < n; i++)
   {
       for (j = 0; j < n - i; j++)
       {
           if (edad[j] > edad[j + 1])
           {
               t = edad[j];
               edad[j] = edad[j + 1];
               edad[j + 1] = t;

               strcpy(temp[j],nombre[j + 1]);
               strcpy(nombre[j + 1],nombre[j]);
               strcpy(nombre[j],temp[j]);

           }
       }
   }

    for ( i = 0; i < n; i++)
    {
        printf("\nEl alumno %i se llama %s y tiene %i años", i + 1, nombre[i], edad[i]);
    }
    
}
