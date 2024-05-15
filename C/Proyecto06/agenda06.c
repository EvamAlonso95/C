/*
    Programa agenda
    v1
    Eva Alonso
*/

#include <stdio.h>
#define PI 3.1416
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.2"
#define AUTOR "Eva Alonso"

int main(int argc, char *argv[])
{
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