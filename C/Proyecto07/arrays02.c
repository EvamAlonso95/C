#include <stdio.h>

int main(int argc, char *argv[])
{
    int telefono[10];
    telefono[0] = 12345;
    telefono[1] = 67890;
    telefono[2] = 24680;
    telefono[3] = 13579;
    telefono[4] = 98765;
    telefono[5] = 54321;
    telefono[6] = 10101;
    telefono[7] = 99999;
    telefono[8] = 77777;
    telefono[9] = 88888;

    printf("El telefono es %i", telefono[7]);
    return 0;
}