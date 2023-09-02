#include <stdio.h>
#include <stdlib.h>

void main() {
    int nro, resultado;

    printf("Ingrese un numero: ");
    scanf("%i", &nro);
    if (nro %2 == 0) {
        printf("El numero es par\n");
        system("pause");
    }
    else {
        printf("El numero es impar\n");
        system("pause");
    }

}