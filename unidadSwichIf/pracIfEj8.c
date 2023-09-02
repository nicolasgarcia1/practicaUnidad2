#include <stdio.h>
#include <stdlib.h>

/*
Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.
*/

void main() {
    float saldoCuenta, retiro;
    saldoCuenta = 100000;

    printf("El saldo de su cuenta es: $%f\nIngrese monto a retirar: $", saldoCuenta);
    scanf("%f", &retiro);
    if (retiro > saldoCuenta) {
        printf("No puede retirarse un saldo mayor al que tiene en su cuenta.\n");
        system("pause");
    }
    else {
        saldoCuenta = saldoCuenta - retiro;
        printf("Usted retira: $%f\nEl saldo restante en su cuenta es: $%f\n", retiro, saldoCuenta);
        system("pause");
    }
}