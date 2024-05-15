/*
    Programa agenda
    v1
    Eva Alonso
*/

#include <stdio.h>
#include <string.h>
#define PI 3.1416
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.2"
#define AUTOR "Eva Alonso"

int main(int argc, char *argv[])
{
    // Creo una estructura y le pongo un par de registros
    struct Agenda
    {
        char nombre[50];
        char apellidos[50];
        char correo[50];
        char telefono[50];
        char direccion[50];
    };

    struct Agenda agenda[100];

    strcpy(agenda[0].nombre, "Eva");
    strcpy(agenda[0].apellidos, "Alonso");

    strcpy(agenda[1].nombre, "Juan");
    strcpy(agenda[1].apellidos, "Perez");

    strcpy(agenda[2].nombre, "Julia");
    strcpy(agenda[2].apellidos, "Garcia");
    // Mensaje de bienvenida
    printf("%s v%s \n", NOMBREPROGRAMA, VERSION);
    printf("por %s\n", AUTOR);
    printf("Selecciona una opcion: \n");
    printf("\t 1 -Listado de registros \n");
    printf("\t 2 - Introducir registro \n");
    printf("\t 3 - Eliminar registro \n");
    printf("\t 4 - Buscar registro \n");
    printf("\t 5 - Actualizar registro \n");
    printf("Tu opcion:");
    char opcion = getchar();
    printf("La opción que has seleccionado es: %c \n", opcion);
    // Vamos a decidir qué hacemos en cada parte del programa
    switch (opcion)
    {
    case '1':
        printf("A continuación te ofrezco un listado de registros: \n");

        for (int i = 0; i < 10; i = i + 1)
        {
            if (strcmp(agenda[i].nombre, ""))
            {
                printf("Nombre: %s\n", agenda[i].nombre);
                printf("Apellidos: %s\n", agenda[i].apellidos);
            }
        }

        break;
    case '2':
        printf("Introduce tu registro: \n");
        break;
    case '3':
        printf("Vamos a eliminar un registro \n");
        break;
    case '4':
        printf("Buscamos entre los registros \n");
        break;
    case '5':
        printf("Actualizamos los datos del programa \n");
        break;
    default:
        printf("Opcion no valida \n");
        break;
    }
    printf("Finalizando la ejecucion del programa...\n");
    printf("\n");
    return 0;
}