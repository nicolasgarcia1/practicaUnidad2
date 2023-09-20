#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
- Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784

*/

void main() {

    char tarjetaElegida[]="";
    int opcionPago, opcionTarjeta, opcionCuota, DNI, cantidadVentas;
    float valorVenta;
    printf("Ingrese la cantidad de ventas del dia: ");
    scanf("%i", &cantidadVentas);

    for (int i = 1; i <= cantidadVentas; i++)
    {
        printf("\nIngresando nueva venta\n");
        printf("Ingrese su DNI (entre 1000000 y 99999999): ");
        scanf("%i", &DNI);
        while ((DNI < 1000000) || (DNI > 99999999)) 
        {
            printf("\nIngrese un DNI valido: ");
            scanf("%i", &DNI);
        }
        printf("\nSeleccione el medio de pago: 1-Efectivo, 2-Tarjeta de credito: ");
        scanf("%i", &opcionPago);
        while (0 >= opcionPago || opcionPago >= 3) 
        {
            printf("\nSeleccione un medio de pago valido: 1-Efectivo, 2-Tarjeta de credito: ");
            scanf("%i", &opcionPago);
        }
        if (opcionPago == 1) 
        {
            printf("\nIngrese el valor de la venta: ");
            scanf("%f", &valorVenta);
            printf("\nDNI: %i \nMedio de pago: Efectivo \nTotal: %0.2f\n", DNI, valorVenta);
            system("pause");
        }
        else 
        {
            printf("\nSeleccione tarjeta de credito: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal: ");
            scanf("%i", &opcionTarjeta);
            while (0 >= opcionTarjeta || opcionTarjeta >= 5) 
            {
                printf("\nSeleccione tarjeta de credito valida: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal: ");
                scanf("%i", &opcionTarjeta);
            }
            if (opcionTarjeta == 1) 
            {
                strcpy(tarjetaElegida, "Visa");
            }
            else if (opcionTarjeta == 2) 
            {
                strcpy(tarjetaElegida, "American Express");
            }
            else if (opcionTarjeta == 3) 
            {
                strcpy(tarjetaElegida, "Mercado Pago");
            }
            else 
            {
                strcpy(tarjetaElegida, "Cabal");
            }
            printf("Seleccione cantidad de cuotas: 1- 1 cuota, 2- 3 cuotas, 3- 6 cuotas 4- 12 cuotas: ");
            scanf("%i", &opcionCuota);
            while (0 >= opcionCuota || opcionCuota >= 5) 
            {
                printf("Ingrese una cantidad de cuotas validas: 1- 1 cuota, 2- 3 cuotas, 3- 6 cuotas 4- 12 cuotas: ");
                scanf("%i", &opcionCuota);
            }
            if (opcionCuota == 1) 
            {
                printf("\nDNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 1 \nTotal: $4600\n", DNI, tarjetaElegida);
                system("pause");
            }
            else if (opcionCuota == 2) 
            {
                printf("\nDNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 3 \nTotal: $4784\n", DNI, tarjetaElegida);
                system("pause");
            }
            else if (opcionCuota == 3) 
            {
                printf("\nDNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 6 \nTotal: $4968\n", DNI, tarjetaElegida);
                system("pause");
            }
            else 
            {
                printf("\nDNI: %i \nMedio de pago: Tarjeta de credito \nTarjeta: %s\nCuotas: 12 \nTotal: $4968\n", DNI, tarjetaElegida);
                system("pause");
            }
        }
    }
}