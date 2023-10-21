#include <stdio.h>
#include <stdlib.h>

/* Crear una función que calcule el cubo de un número real (float).
 * El resultado deberá ser otro número real. */

float CalcularCubo(float numero); // prototipo de la función

void main()
{
    float num;
    float cubo;
    printf("Ingrese un número\n");
    scanf("%f", &num);

    cubo = CalcularCubo(num);  //llamada a la función 

    printf("El cubo de %.2f es %.2f\n", num, cubo);

    system("pause");
}

// esta función recibe un numero y devuelve el cubo del mismo
float CalcularCubo(float numero)
{
    float resultado = numero * numero * numero;
    return resultado;
}