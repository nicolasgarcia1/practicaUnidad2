#include <stdio.h>
#include <stdlib.h>

void main(){

    int eleccion;
    float kgIngresados, resultado;
    printf("Ingrese cuantos kg pesa su cosa: ");    
    scanf("%f", &kgIngresados);
    printf("\nA que quiere convertir su peso en kg? \n 1-Gramos \n 2-Libras \n 3-Toneladas \n 4-Onzas\n \n \n");
    scanf("%i", &eleccion);
    while (eleccion > 4) {
        printf("Ingrese un numero valido");
    }
    if (eleccion == 1) {
        resultado = kgIngresados * 1000;
        printf("\nSu resultado son %f gramos\n", resultado);
        system("pause");
    }
    if (eleccion == 2) {
        resultado = kgIngresados * 2.205;
        printf("\nSu resultado son %f libras\n", resultado);
        system("pause");
    }
    if (eleccion == 3) {
        resultado = kgIngresados * 0.001;
        printf("\nSu resultado son %f toneladas\n", resultado);
        system("pause");
    }
    if (eleccion == 4) {
        resultado = kgIngresados * 35.274;
        printf("\nSu resultado son %f onzas\n", resultado);
        system("pause");
    }
}