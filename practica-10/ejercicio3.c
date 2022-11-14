#include <stdio.h>
int main(){
int ncolumnas, nrenglones, i, j, suma=0;
printf("Dame la cantidad de columnas del arreglo -> ");
scanf("%i", &ncolumnas);
printf("Dame la cantidad de renglones del arreglo -> ");
scanf("%i", &nrenglones);

int matriz[nrenglones][ncolumnas];

for (i = 0; i < ncolumnas; i++)
    {
        for (j = 0; j < nrenglones; j++)
        {
            scanf("%i", &matriz[i][j]);
            if (matriz[i][j]<0 || matriz[i][j]>9){
                printf("Valor no valido");
                goto fin;
            }
            if (matriz[i][j] == 0)
            suma = suma +1;
        }
        printf("\n");
    }

for (i = 0; i < ncolumnas; i++)
    {
        for (j = 0; j < nrenglones; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
        
    }
    
    printf("La cantidad de 0's fue -> %i", suma);
fin:
    return 0;
}