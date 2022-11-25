#include <stdio.h>

dimension()
{
    int n;
    scanf("%d", &n);
    return n;
}

pedirdatos(float M[][], int n, int m)
{
    int i,j;
    float M[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%f", &M[i][j]);
        }
    }
    return M;
}

sumamatriz(float M1[][], float M2[][], float M3[][], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
    return M3;
}

imprimematriz(float M[][], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%f", M[i][j]);
        }
    }
}

int main()
{
    int f1,c1,f2,c2,f3,c3;
    printf("¿Cuantas filas M1?");
    f1=dimension();
    printf("¿Cuantas columnas M1?");
    c1=dimension();
    printf("¿Cuantas filas M2?");
    f2=dimension();
    printf("¿Cuantas columnas M2?");
    c2=dimension();

    if ((f1==f2)&&(c1==c2))
    {
        float M1[f1][c1], M2[f2][c2], M3[f3][c3];
        printf("Ingrese los valores de la matriz M1");
        pedirdatos(M1,f1,c1);
        printf("Ingrese los valores de la matriz M2");
        pedirdatos(M2,f2,c2);
        sumamatriz(M1,M2,M3,f1,c1);
        imprimematriz(M3,f1,c1);
    }
    
}