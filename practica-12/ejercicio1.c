#include <stdio.h>

int main()
{
    int n1, n2, r;
    int *ap_n1, *ap_n2, *ap_r;
    char mensaje1[] = "Direccion y contenido del primer numero\n";
    char mensaje2[] = "Direccion y contenido del segundo numero\n";
    char mensaje3[] = "Direccion y contenido de la suma\n";
    FILE *apFile;

    printf("Dame un numero entero:\n");
    scanf("%d", &n1);
    printf("\nDame otro numero entero:\n");
    scanf("%d", &n2);
    r = n1 + n2;
    printf("\nEl resultado es: %d\n", r);

    ap_n1 = &n1;
    ap_n2 = &n2;
    ap_r = &r;

    apFile = fopen("registroDirCont.txt", "w");

    fputs(mensaje1, apFile);
    fprintf(apFile, "%p\t %d\n\n", ap_n1, n1);
    fputs(mensaje2, apFile);
    fprintf(apFile, "%p\t %d\n\n", ap_n2, n2);
    fputs(mensaje3, apFile);
    fprintf(apFile, "%p\t %d\n\n", ap_r, r);
    fclose(apFile);
    printf("\nSe creo archivo con exito");
}