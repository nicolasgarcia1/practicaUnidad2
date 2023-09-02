#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    char tarjetaElegida[]="";
    float PRECIO;
    int opcionPago, opcionTarjeta, opcionCuota, DNI;

    printf("Ingrese su DNI (entre 1000000 y 99999999): ");
    scanf("%i", &DNI);
    while ((DNI < 1000000) || (DNI > 99999999)) {
        printf("\nIngrese un DNI valido: ");
        scanf("%i", DNI);
    }
    printf("\nSeleccione el medio de pago: 1-Efectivo, 2-Tarjeta de credito: ");
    scanf("%i", &opcionPago);
    while (0 >= opcionPago >= 3) {
        printf("\nSeleccione un medio de pago valido: 1-Efectivo, 2-Tarjeta de credito: ");
        scanf("%i", opcionPago);
    }
    if (opcionPago == 1) {
        printf("\nDNI: %i \nMedio de pago: Efectivo \nTotal: $4600\n", DNI);
        system("pause");
    }
    else {
        printf("\nSeleccione tarjeta de credito: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal: ");
        scanf("%i", &opcionTarjeta);
        while (0 >= opcionTarjeta || opcionTarjeta >= 5) {
            printf("\nSeleccione tarjeta de credito valida: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal: ");
            scanf("%i", opcionTarjeta);
        }
        if (opcionTarjeta == 1) {
            strcpy(tarjetaElegida, "Visa");
        }
        else if (opcionTarjeta == 2) {
            strcpy(tarjetaElegida, "American Express");
        }
        else if (opcionTarjeta == 3) {
            strcpy(tarjetaElegida, "Mercado Pago");
        }
        else {
            strcpy(tarjetaElegida, "Cabal");
        }
        printf("Seleccione cantidad de cuotas: 1- 1 cuota, 2- 3 cuotas, 3- 6 cuotas 4- 12 cuotas: ");
        scanf("%i", &opcionCuota);
        while (0 >= opcionCuota || opcionCuota >= 5) {
            printf("Ingrese una cantidad de cuotas validas: 1- 1 cuota, 2- 3 cuotas, 3- 6 cuotas 4- 12 cuotas: ");
            scanf("%i", &opcionCuota);
        }
        if (opcionCuota == 1) {
            printf("DNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 1 \nTotal: $4600\n", DNI, tarjetaElegida);
            system("pause");
        }
        else if (opcionCuota == 2) {
            printf("DNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 3 \nTotal: $4784\n", DNI, tarjetaElegida);
            system("pause");
        }
        else if (opcionCuota == 3) {
            printf("DNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 6 \nTotal: $4968\n", DNI, tarjetaElegida);
            system("pause");
        }
        else {
            printf("DNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 12 \nTotal: $4968\n", DNI, tarjetaElegida);
            system("pause");
        }
    }
}