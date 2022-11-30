#include <stdio.h>
#include <stdlib.h>
#define DIM 3
void leer_matriz(int A[DIM][DIM]);
void escribe_matriz(int A[DIM][DIM]);
void producto_matrices(int A[DIM][DIM], int B[DIM][DIM], int C[DIM][DIM]);
int main()
{
    int A[DIM][DIM], B[DIM][DIM], C[DIM][DIM];
    leer_matriz(A);
    escribe_matriz(A);
    leer_matriz(B);
    escribe_matriz(B);

    producto_matrices(A, B, C);
    printf("El producto vale: n");
    escribe_matriz(C);

    system("PAUSE");
    return 0;
}
void leer_matriz(int A[DIM][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
    {
        printf("Dame los %d datos de la fila %d: n", DIM, i + 1);
        for (j = 0; j < DIM; j++)
            scanf("%d", &A[i][j]);
    }
}

void escribe_matriz(int A[DIM][DIM])
{
    int i, j;
    printf("Esta matriz es: n");
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
            printf("%d  ", A[i][j]);
        printf("n");
    }
}

void producto_matrices(int A[DIM][DIM], int B[DIM][DIM], int C[DIM][DIM])
{
    int i, j, k;
    for (i = 0; i < DIM; i++)
        for (j = 0; j < DIM; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < DIM; k++)
                C[i][j] = C[i][j] + A[i][j] * B[i][j];
        }
}