#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 5;

    do
    {
        printf("El programa esta funcionando \n");
        i = i + 1;
    } while (i < 10);

    printf("\n");
    return 0;
}