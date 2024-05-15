#include <stdio.h>

int main(int argc, char *argv[])
{
    char *agenda[10][4];
    // array multidimensional
    agenda[0][0] = "Eva Alonso";
    agenda[0][1] = "123465";
    agenda[0][2] = "ava@gmail.es";
    agenda[0][3] = "calle eva";

    agenda[1][0] = "Juan Perez";
    agenda[1][1] = "987654";
    agenda[1][2] = "juan@example.com";
    agenda[1][3] = "Calle Juan";

    agenda[2][0] = "Pedro García";
    agenda[2][1] = "333333";
    agenda[2][2] = "pedro@example.com";
    agenda[2][3] = "Calle Pedro";

    printf("El contacto que has consultado es %s", agenda[2][0]);
    return 0;
}