#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int edad;
float posx;
float posy;
float posz;
char *identificador;
char ruta[100];

int bucle()
{
    printf("Estas dentro del bucle \n \n");
    while (1)
    {
        edad = edad + 1;
        posx = posx + (float)((float)(rand() % 100) / 100) - 0.5;
        posy = posy + (float)((float)(rand() % 100) / 100) - 0.5;

        printf("Ejecutando... \n");
        printf("El identificador de esta persona es el %s \n", identificador);
        printf("Tienes una edad de %i segundos\n", edad);
        printf("Coordenadas: x = %f, y = %f\n", posx, posy);

        FILE *fp;

        fp = fopen(ruta, "w+");
        fprintf(fp, "%f,%f,%f\n", posx, posy, posz);
        fclose(fp);

        printf("\n");
        sleep(1);
    }
    return 0;
}

int main(int argc, char *argv[])
{
    // Vamos a dar las condiciones de inicio
    edad = 0;
    posx = 0;
    posy = 0;

    char aleatorio[50];

    sprintf(aleatorio, "%ld", (unsigned long)time(NULL));

    identificador = aleatorio;

    strcpy(ruta, "registros/");
    strcat(ruta, identificador);
    strcat(ruta, ".txt");

    printf("La edad de esta persona es %i\n", edad);
    bucle();
    return 0;
}

// MINUTO 45