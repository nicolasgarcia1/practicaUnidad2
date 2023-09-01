#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double primerLado, segundoLado, diagonal, aux, perimetro, superficie;
    printf("Ingrese el primer lado: "); scanf("%Lf", &primerLado);
    printf("\nIngrese el segundo lado: "); scanf("%Lf", &segundoLado);
    aux = primerLado*primerLado + segundoLado*segundoLado;
    diagonal = sqrt(aux);
    superficie = primerLado * segundoLado;
    perimetro = primerLado*2 + segundoLado*2;
    printf("\nLa diagonal es %Lf, la superficie es %Lf y el perimetro es %Lf\n\n", diagonal, superficie, perimetro);
    system("pause");
    return 0;

}