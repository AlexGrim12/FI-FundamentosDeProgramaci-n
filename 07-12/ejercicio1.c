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

struct datosAlumno estudiante;

int main(int argc, char const *argv[])
{
    FILE *apFile;
    apFile = fopen("DatosAlumno.txt", "a");
    printf("Da nombre Alumno: ");
    gets(estudiante.nombre);
    printf("Da apellido Alumno: ");
    gets(estudiante.apellido);
    printf("Da carrera Alumno: ");
    gets(estudiante.carrera);
    printf("Da no de cuenta Alumno: ");
    scanf("%s", estudiante.noDeCuenta);
    printf("Da edad Alumno: ");
    scanf("%d", &estudiante.edad);
    printf("Da estatura Alumno: ");
    scanf("%f", &estudiante.estatura);
    printf("Da peso Alumno: ");
    scanf("%f", &estudiante.peso);

    printf("\nDatos del alumno: ");
    printf("\nNombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f \nPeso: %.2f\n", estudiante.nombre, estudiante.apellido, estudiante.carrera, estudiante.noDeCuenta, estudiante.edad, estudiante.estatura, estudiante.peso);
    //Imprime en el archivo solicitado :)
    fprintf(apFile, "Nombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f \nPeso: %.2f\n\n", estudiante.nombre, estudiante.apellido, estudiante.carrera, estudiante.noDeCuenta, estudiante.edad, estudiante.estatura, estudiante.peso);
    fclose(apFile);

    return 0;
}
