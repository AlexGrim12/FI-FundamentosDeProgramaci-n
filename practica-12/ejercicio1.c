#include <stdio.h>

int main()
{
    int n1, n2, r;
    int *ap_n1, *ap_n2, *ap_r;
    FILE *apFile;

    printf("Dame un numero entero:\n");
    scanf("%d", &n1);
    printf("Dame otro numero entero:\n");
    scanf("%d", &n2);
    r = n1 + n2;
    printf("\nEl resultado es: %d\n", r);

    ap_n1 = &n1;
    ap_n2 = &n2;
    ap_r = &r;

    apFile = fopen("registroDirCont.txt", "w");

    fprintf(apFile, "Direccion y contenido del primer numero\n %p \t%d\n", ap_n1, *ap_n1);
    fprintf(apFile, "\nDireccion y contenido del segundo numero\n %p\t %d\n", ap_n2, *ap_n2);
    fprintf(apFile, "\nDireccion y contenido del resultado\n %p\t %d", ap_r, *ap_r);
    fclose(apFile);
    printf("Se creo el archivo con exito\n");

    return 0;
}