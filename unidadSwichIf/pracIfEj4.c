#include <stdio.h>
#include <stdlib.h>

void main(){

    int nro1, nro2, nro3, mayor;
    printf("Ingrese el primer numero: ");
    scanf("%i", &nro1);
    printf("\nIngrese el segundo numero: ");
    scanf("%i", &nro2);
    printf("\nIngrese el tercer numero: ");
    scanf("%i", &nro3);

    if (nro1 > nro2 && nro1 > nro3) {
        printf("El primer numero es el mas grande\n");system("pause");
    }
    else if (nro2 > nro3 && nro2 > nro1) {
        printf("El segundo numero es el mas grande\n");system("pause");
    }
    else if (nro3 > nro2 && nro3 > nro1) {
        printf("El tercer numero es el mas grande\n");
        system("pause");
    }
    else {
        printf("Los numeros son iguales\n");
        system("pause");
    }
}