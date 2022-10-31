/*La política de la compañía telefónica “Chismefón” es:
“Chismea + x-”. Cuando se realiza una llamada, el cobro es
por el tiempo que ésta dura, de tal forma que los primeros
cinco minutos cuestan $ 1.00 c/u, los siguientes tres, 80¢ c/
u, los siguientes dos minutos, 70¢ c/u, y a partir del décimo
minuto, 50¢ c/u. Además, se carga un impuesto de 3 %
cuando es domingo, y si es día hábil, en turno matutino, 15 %,
y en turno vespertino, 10 %. Realice un programa para
determinar cuánto debe pagar por cada concepto una
persona que realiza una llamada.*/
#include <stdio.h>

int main()
{
    int TI;
    float PAG, IMP, TOT;
    char DIA[10], TURNO[10];
    printf("Introduzca el tiempo de la llamada: ");
    scanf("%d", &TI);
    printf("Introduzca el d%ca: ", 161);
    scanf("%s", DIA);
    printf("Introduzca el turno: ");
    scanf("%s", TURNO);
    if (TI < 1)
    {
        printf("Tiempo incorrecto");
        exit(0);
    }

    // tiempo
    if (TI <= 5)
        PAG = TI * 1;
    else if (TI <= 8)
        PAG = 5 + (TI - 5) * 0.8;
    else if (TI <= 10)
        PAG = 5 + 3 * 0.8 + (TI - 8) * 0.7;
    else
        PAG = 5 + 3 * 0.8 + 2 * 0.7 + (TI - 10) * 0.5;

    // día
    if (strcmp(DIA, "domingo") == 0)
        IMP = PAG * 0.03;
    else if (strcmp(TURNO, "matutino") == 0)
        IMP = PAG * 0.15;
    else if (strcmp(TURNO, "vespertino") == 0)
        IMP = PAG * 0.1;
    else
        IMP = 0;

    TOT = PAG + IMP;

    // impreciones
    printf("\nEl pago por el tiempo es: %.2f", PAG);

    printf("\nEl impuesto es: %.2f", IMP);

    printf("\nEl total es: %.2f", TOT);

    return 0;
}
