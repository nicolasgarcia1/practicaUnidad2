#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double primerLado, segundoLado, hipotenusa, aux, perimetro, superficie;
    printf("Ingrese el primer lado: "); scanf("%Lf", &primerLado);
    printf("\nIngrese el segundo lado: "); scanf("%Lf", &segundoLado);
    aux = primerLado*primerLado + segundoLado*segundoLado;
    hipotenusa = sqrt(aux);
    superficie = (primerLado * segundoLado)/2;
    perimetro = primerLado + segundoLado + hipotenusa;
    printf("\nLa hipotenusa del triangulo rectangulo es %Lf, la superficie es %Lf y el perimetro es %Lf\n", hipotenusa, superficie, perimetro);
    system("pause");
    return 0;

}