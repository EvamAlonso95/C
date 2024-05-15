#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    struct Agenda
    {
        char nombre[50];
        char apellidos[50];
        char correo[50];
        char telefono[50];
        char direccion[50];
    };

    struct Agenda registro1;
    strcpy(registro1.nombre, "Eva");
    strcpy(registro1.apellidos, "Alonso");
    strcpy(registro1.correo, "Eva@gmail");
    strcpy(registro1.telefono, "123456");
    strcpy(registro1.direccion, "calle eva");

    struct Agenda registro2;
    strcpy(registro2.nombre, "Juan");
    strcpy(registro2.apellidos, "Perez");
    strcpy(registro2.correo, "juan@example.com");
    strcpy(registro2.telefono, "987654");
    strcpy(registro2.direccion, "Calle Juan");
    printf("\n");

    struct Agenda registro3;
    strcpy(registro3.nombre, "Pedro");
    strcpy(registro3.apellidos, "García");
    strcpy(registro3.correo, "pedro@example.com");
    strcpy(registro3.telefono, "333333");
    strcpy(registro3.direccion, "Calle Pedro");

    printf("El nombre del primer registro es: %s \n", registro1.nombre);
    printf("El apellidos del segundo registro es: %s  \n", registro2.apellidos);
    printf("El correo del tercer registro es: %s  \n", registro3.correo);

    return 0;
}