#include <stdlib.h>
#include <stdio.h>

/*
Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
número primo o 0 en caso contrario.
*/

int esPrimo(int nro);

int esPrimo(int nro)
{
    if (nro == 1 || nro == 2)
    {
        return 0;
    }

    for (int i = 2; i < nro; i++)
    {
        if ((nro%i) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int nro, resultado;
    do{
        printf("ingrese un numero para ver si es primo: ");
        scanf("%i", &nro);
        while (nro < 0)
        {
            printf("ingrese un numero positivo para ver si es primo: ");
            scanf("%i", &nro);
        }

        resultado = esPrimo(nro);

        if (resultado == 1)
        {
            printf("el numero %i es primo.\n", nro);
            system("pause");
        }
        else
        {
            printf("el numero %i no es primo.\n", nro);
            system("pause");
        }
        system("cls");
    }while(nro != 0);
}