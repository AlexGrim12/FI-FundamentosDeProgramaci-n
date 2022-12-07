#include <stdio.h>

struct datosAlumno
{
    char nombre[20];
    char apellido[20];
    char carrera[20];
    char noDeCuenta[20];
    int edad;
    float estatura;
    float peso;
};

struct datosAlumno estudiante[20];

int main()
{
    int n;
    FILE *apFile;
    apFile = fopen("DatosAlumno.txt", "a");
    printf("Da la cantidad de alumnos: ");
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Da nombre Alumno: ");
        gets(estudiante[i].nombre);
        printf("Da apellido Alumno: ");
        gets(estudiante[i].apellido);
        printf("Da carrera Alumno: ");
        gets(estudiante[i].carrera);
        printf("Da no de cuenta Alumno: ");
        scanf("%s", estudiante[i].noDeCuenta);
        printf("Da edad Alumno: ");
        scanf("%d", &estudiante[i].edad);
        printf("Da estatura Alumno: ");
        scanf("%f", &estudiante[i].estatura);
        printf("Da peso Alumno: ");
        scanf("%f", &estudiante[i].peso);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nDatos del alumno %i: ", i + 1);
        printf("\nNombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f \nPeso: %.2f\n", estudiante[i].nombre, estudiante[i].apellido, estudiante[i].carrera, estudiante[i].noDeCuenta, estudiante[i].edad, estudiante[i].estatura, estudiante[i].peso);

        //Imprime en el archivo solicitado :)
        fprintf(apFile, "Datos del alumno %i: ", i + 1);
        fprintf(apFile, "\nNombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f \nPeso: %.2f\n\n", estudiante[i].nombre, estudiante[i].apellido, estudiante[i].carrera, estudiante[i].noDeCuenta, estudiante[i].edad, estudiante[i].estatura, estudiante[i].peso);
    }
    fclose(apFile);
    return 0;
}
