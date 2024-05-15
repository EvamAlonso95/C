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

   struct Agenda agenda[100];

   strcpy(agenda[0].nombre,"Eva");
   strcpy(agenda[0].apellidos,"Alonso");


    strcpy(agenda[1].nombre, "Juan");
    strcpy(agenda[1].apellidos, "Perez");

    strcpy(agenda[2].nombre, "Pedro");
    strcpy(agenda[2].apellidos, "García");

    for(int i = 0; i<10;i = i + 1){
        printf("Nombre: %s\n", agenda[i].nombre);
        printf("Apellidos: %s\n", agenda[i].apellidos);
    }

    printf("\n");
    return 0;
}