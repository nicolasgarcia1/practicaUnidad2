#include <stdio.h>
#include <stdlib.h>

/*

Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784

*/
void main() {

    float PRECIO;
    int opcionPago, OpcionTarjeta, DNI;

    printf("Ingrese su DNI (entre 1000000 y 99999999): ");
    scanf("%i", &DNI);
    while ((DNI < 1000000) &(DNI > 99999999)) {
        printf("\nIngrese un DNI valido: ");
        scanf("%i", DNI);
    }
    printf("\nSeleccione el medio de pago: 1-Efectivo, 2-Tarjeta de credito");
    scanf("%i", opcionPago);
    while (0 >= opcionPago >= 3) {
        printf("\nSeleccione un medio de pago valido: 1-Efectivo, 2-Tarjeta de credito");
        scanf("%i", opcionPago);
    }
    if (opcionPago == 1) {
        printf("\nDNI: %i \nMedio de pago: Efectivo \nTotal: $4600");
    }
    else {
        printf("\nSeleccione tarjeta de credito: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal");
        scanf("%i", OpcionTarjeta);
        while (0 >= OpcionTarjeta >= 5) {
            printf("\nSeleccione tarjeta de credito valida: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal");
            scanf("%i", OpcionTarjeta);
        }
        if (OpcionTarjeta == 1) {
            char tarjetaElegida[] = "Visa";
        }
        else if (OpcionTarjeta == 2) {
            char tarjetaElegida[] = "American Express";
        }
        else if (OpcionTarjeta == 3) {
            char tarjetaElegida[] = "Mercado Pago";
        }
        else {
            char tarjetaElegida[] = "Cabal";
        }
    }   printf("Seleccione cantidad de cuotas: 1- 1 cuota, 2- 3 cuotas, ")
}