#include <stdio.h>
#include <stdlib.h>

/*
Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.
*/

void main () {
    float valorVenta, valorFinal;

    printf("Ingrese el valor de la venta: ");
    scanf("%f", &valorVenta);

    if (valorVenta >= 100000) {
        valorFinal = valorVenta*0.85;
    }
    printf("\nEl valor final de su venta es: %f\n", valorFinal);
    system("pause");
}