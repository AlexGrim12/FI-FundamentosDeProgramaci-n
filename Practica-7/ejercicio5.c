#include <stdio.h>
#include <math.h>

int ejercicio1()
{
    int dia, mes;
    printf("Ingrese el dia:\n");
    scanf("%i", &dia);
    printf("Ingrese el mes:\n");
    scanf("%i", &mes);
    if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12)
    {
        switch (mes)
        {
        default:
            printf("Dato no valido\n");
            break;

        case 1:
            printf("Es Invierno\n");
            break;

        case 2:
            printf("Es Invierno\n");
            break;

        case 3:
            if (dia <= 19)
                printf("Es Invierno\n");
            else
                printf("Es Primavera\n");
            break;

        case 4:
            printf("Es Primavera\n");
            break;

        case 5:
            printf("Es Primavera\n");
            break;

        case 6:
            if (dia <= 20)
                printf("Es Primavera\n");
            else
                printf("Es Verano\n");
            break;

        case 7:
            printf("Es Verano\n");
            break;

        case 8:
            printf("Es Verano\n");
            break;

        case 9:
            if (dia <= 23)
                printf("Es Verano\n");
            else
                printf("Es Otoño\n");
            break;

        case 10:
            printf("Es Otoño\n");
            break;

        case 11:
            printf("Es Otoño\n");
            break;

        case 12:
            if (dia <= 21)
                printf("Es Otoño\n");
            else
                printf("Es Invierno\n");
            break;
        }
    }
    else
        printf("Datos no válidos\n");
}

int ejercicio2()
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
}

int ejercicio3()
{
    float n;
    int op;
    printf("Dame valor\n");
    scanf("%f", &n);

    printf("\n");
    printf("Menu\n");
    printf("\n");
    printf("Eliga la funcion que quiera aplicar:\n");
    printf("!) Seno\n");
    printf("2) Coseno\n");
    printf("3) Tangente\n");
    printf("4) Seno Hiperbolico\n");
    printf("5) Coseno Hiperbolico\n");
    printf("6) Tangente Hiperbolico\n");
    printf("7) Raiz Cuadrada\n");
    printf("8) Logaritmo Natural\n");
    printf("9) Logaritmo en Base 10\n");
    printf("10) Valor Absoluto\n");
    printf("\n");
    scanf("%i", &op);
    printf("\n");

    switch (op)
    {
    case 1:
        printf("El Seno de %f es: %f\n", n, sin(n));
        break;

    case 2:
        printf("El Coseno de %f es: %f\n", n, cos(n));
        break;

    case 3:
        printf("La Tangente de %f es: %f\n", n, tan(n));
        break;

    case 4:
        printf("El Seno Hiperbolico de %f es: %f\n", n, sinh(n));
        break;

    case 5:
        printf("El Coseno Hiperbolico de %f es: %f\n", n, cosh(n));
        break;

    case 6:
        printf("La Tangente Hiperbolica de %f es: %f\n", n, tanh(n));
        break;

    case 7:
        printf("La Raiz Cuadrada de %f es: %f\n", n, sqrt(n));
        break;

    case 8:
        printf("El Logaritmo Natural de %f es: %f\n", n, log(n));
        break;

    case 9:
        printf("El Logaritmo Base 10 de %f es: %f\n", n, log10(n));
        break;

    case 10:
        printf("El Valor Absoluto de %f es: %f\n", n, fabs(n));
        break;

    default:
        printf("Dato no valido\n");
    }
}

int ejercicio4()
{
    int resUsuario;
    int calf = 0;

    printf("PREGUNTA 1 \n");
    printf("¿Marte es de color ROJO? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 1)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 2 \n");
    printf("¿La óptica es una rama de la Física? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 1)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 3 \n");
    printf("¿El cuerpo humano tiene 206 huesos? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 1)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 4 \n");
    printf("¿La raíz de 121 es 12? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 0)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 5 \n");
    printf("¿Un kilómeto equivale a 500 metros? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 0)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 6 \n");
    printf("¿En 1939 terminó la Segunda Guerra Mundial? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 0)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 7 \n");
    printf("¿En 1822 se creó el primer ordenador mecánico? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 1)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 8 \n");
    printf("¿Lavoisier es considerado el padre de la química moderna ? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 1)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 9 \n");
    printf("¿Un siglo tiene cien años? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 1)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("PREGUNTA 10 \n");
    printf("¿Cada cuatro años se realiza una Copa del Mundo? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i", &resUsuario);

    if (resUsuario == 1)
    {
        calf = calf + 1;
    }
    else
    {
        calf = calf + 0;
    }

    printf("CALIFICACIÓN : %i \n\n\n\n", calf);
}

int opciones()
{
    printf("\n\n%cQu%c desea realizar? 1. Repetir este programa 2. Ir al men%c 3. Salir -> ", 168, 130, 163);
    return 0;
}

int main()
{
rejercicio5:
    int opt, r;

    printf("Menu\n\n");
    printf("\n1) Ejercicio 1");
    printf("\n2) Ejercicio 2");
    printf("\n3) Ejercicio 3");
    printf("\n4) Ejercicio 4");
    printf("\n5) Salir");
    printf("\nEliga el ejercicio para acceder ->");
    scanf("%i", &opt);

    switch (opt)
    {
    default:
        printf("Dato no valido\n");
        break;

    case 1:
    rejercicio1:
        ejercicio1();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio1;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;

    case 2:
    rejercicio2:
        ejercicio2();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio2;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;

    case 3:
    rejercicio3:
        ejercicio3();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio3;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;

    case 4:
    rejercicio4:
        ejercicio4();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio4;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;

    case 5:
        printf("\nSaliendo...");
        break;
    }
}
