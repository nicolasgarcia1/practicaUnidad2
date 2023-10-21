#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Crear una función que calcule el cubo de un número real (float). El resultado deberá
ser otro número real.
*/

void funCubo(double* nro);

void funCubo(double* nro)
{
    *nro = pow(*nro, 3);
}

void main()
{
    double nro;
    printf("Ingrese un nro para calcularle su cubo: ");
    scanf("%lf", &nro);

    funCubo(&nro);

    printf("Su cubo es: %0.2lf\n", nro);
    system("pause");
}