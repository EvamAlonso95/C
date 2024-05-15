#include <stdio.h>

int main(int argc, char *argv[])
{
    char *agenda[10][5];
    // array multidimensional
    agenda[0][0] = "Eva Alonso";
    agenda[0][1] = "123465";
    agenda[0][2] = "ava@gmail.es";
    agenda[0][3] = "calle eva";
    agenda[0][4] = "Apellidos";

    agenda[1][0] = "Juan Perez";
    agenda[1][1] = "987654";
    agenda[1][2] = "juan@example.com";
    agenda[1][3] = "Calle Juan";
    agenda[1][4] = "Apellidos";

    agenda[2][0] = "Pedro García";
    agenda[2][1] = "333333";
    agenda[2][2] = "pedro@example.com";
    agenda[2][3] = "Calle Pedro";
    agenda[2][4] = "Apellidos";

    agenda[3][0] = "Ana Martínez";
    agenda[3][1] = "111111";
    agenda[3][2] = "ana@example.com";
    agenda[3][3] = "Calle Ana";
    agenda[3][4] = "Apellidos";

    agenda[4][0] = "Luisa Rodríguez";
    agenda[4][1] = "222222";
    agenda[4][2] = "luisa@example.com";
    agenda[4][3] = "Calle Luisa";
    agenda[4][4] = "Apellidos";

    agenda[5][0] = "Carlos Sánchez";
    agenda[5][1] = "444444";
    agenda[5][2] = "carlos@example.com";
    agenda[5][3] = "Calle Carlos";
    agenda[5][4] = "Apellidos";

    agenda[6][0] = "María García";
    agenda[6][1] = "555555";
    agenda[6][2] = "maria@example.com";
    agenda[6][3] = "Calle María";
    agenda[6][4] = "Apellidos";

    for (int registro = 0; registro <= 6; registro = registro + 1)
    {
        for (int campo = 0; campo <= 4; campo = campo + 1)
        {
            printf("-%s \n", agenda[registro][campo]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}