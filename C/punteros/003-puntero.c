#include <stdio.h>

int main()
{
    int edad = 45;
    printf("Mi edad es de %d \n", edad);
    // saber la direción de meomria de la variable edad
    printf("La dirección de memoria de la variable es: %p \n", &edad);

    int *puntero;
    puntero = &edad;
    // Puntero NO es igual a 45
    // Puntero es igual a 0061FF1C

    printf("El valor del puntero es: %d \n",puntero);
}