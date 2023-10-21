#include <stdio.h>
#include <stdlib.h>

/*
Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero
*/

int signo(int nro);

int signo(int nro)
{
    if (nro > 0)
    {
        return 1;
    }
    else if (nro < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int nro, valor;
    printf("Ingrese un nro: ");
    scanf("%i", &nro);

    valor = signo(nro);

    printf("El valor de su signo es: %i", valor);
    printf("\n");
    system("pause");
}