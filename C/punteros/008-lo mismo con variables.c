#include <stdio.h>

int main(){
    int edad = 45;
    int punterofalso = edad;
    printf("Mi edad es de %d \n",edad);
    printf("La dirección de memoria de la variable es: %p \n",&edad);
    
    int *puntero;
    puntero = &edad; 
    // Puntero NO es igual a 45
    // Puntero es igual a 0061FF1C
    printf("El valor de a quien apunta el puntero A es: %i \n",*puntero);
    printf("La dirección de memoria es: %p \n",puntero);
    printf("El valor del puntero falso es: %i \n",punterofalso);
    printf("---------------------REASIGNACION---------------\n");
    edad = 46;
    punterofalso = edad;
    printf("El valor de a quien apunta el puntero B es: %i \n",*puntero);
    printf("La dirección de memoria es: %p \n",puntero);
    printf("El valor del puntero falso es: %i \n",punterofalso);
}