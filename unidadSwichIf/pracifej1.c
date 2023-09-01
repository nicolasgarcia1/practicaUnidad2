#include <stdio.h>
#include <stdlib.h>

void main(){
    int nro1, nro2, mayor;
    printf("Ingrese el primer numero: ");
    scanf("%i", &nro1);
    printf("\nIngrese el segundo numero: ");
    scanf("%i", &nro2);
    if (nro1 > nro2) {
        mayor = nro1;
        printf("\nEl mayor es: %i\n", mayor);
        system("\npause");
    } else if (nro2 > nro1) {
        mayor = nro2;
        printf("\nEl mayor es: %i\n", mayor);
        system("pause");
    } else {
        printf("Los numeros son iguales");
    }
}