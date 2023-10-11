#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array. 
*/

void main()
{
    int matrizA[5], matrizB[5];

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese un numero: ");
        scanf("%i", &matrizA[i]);
        system("cls");
    }

    for (int j = 0; j < 5; j++)
    {
        matrizB[j] = matrizA[j];
        matrizB[j] = matrizB[j] * 2;
    }

    printf("MATRIZ MULTIPLICADA POR 2: \n");

    for (int k = 0; k < 5; k++)
    {
        printf("indice: %i, valor: %i\n", k, matrizB[k]);
    }

    system("pause");
}