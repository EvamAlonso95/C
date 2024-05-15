/*
    _ No pueden empezar por nº
    - No podemos introducir espacios en los nombres variables
    - Usar camel_case o barra baja
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int edad = 42;
    int edad2 = 40;
    //%i le dice al programa que ahi va una variable de valor entero
    printf("La edad que tienes es de %i años \n", edad2);

    return 0;
}