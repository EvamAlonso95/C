#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int dia = 0; dia <= 31; dia = dia + 1)
    {
        printf("Hoy es dia numero %i del mes \n", dia);
    }
    printf("\n");
    return 0;
}