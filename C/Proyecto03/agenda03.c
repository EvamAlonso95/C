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
    printf("por %s\n",AUTOR);
    printf("Selecciona una opcion: \n");
    printf("\t 1 -Listado de registros \n");
    printf("\t 2 - Introducir registro \n");
    printf("\t 3 - Eliminar registro \n");
    printf("\t 4 - Buscar registro \n");
    printf("\t 5 - Actualizar registro \n");
    printf("Tu opcion:");
    char opcion;
    return 0;
}