#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int primerLado, segundoLado, tercerLado, perimetro;
    printf("Ingrese un lado: "); scanf("%i", &primerLado);
    printf("\nIngrese otro lado: "); scanf("%i", &segundoLado);
    printf("\nIngrese el ultimo lado: "); scanf("%i", &tercerLado);
    perimetro = primerLado + segundoLado + tercerLado;
    printf("\nEl perimetro de su triangulo es: %i\n\n", perimetro);
    system("pause");
    return 0;

}