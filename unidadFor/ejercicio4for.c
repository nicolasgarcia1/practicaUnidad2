#include <stdio.h>
#include <stdlib.h>

/*
Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.
*/

void main() {
    for (int i = 1; i <= 8; i++)
    {
        int resultado = i + (i+2);
        printf("resultado: %i\n", resultado);
        i += 1;
    }
    system("pause");
}