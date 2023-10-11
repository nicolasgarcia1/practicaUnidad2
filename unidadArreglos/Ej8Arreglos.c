#include <stdio.h>
#include <stdlib.h>

/*
Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array. 
*/

void main()
{
    int matrizA[10], matrizB[10], matrizC[10];

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese un numero: ");
        scanf("%i", &matrizA[i]);
        system("cls");
    }

    for (int j = 0; j < 5; j++)
    {
        printf("ingrese un numero: ");
        scanf("%i", &matrizB[j]);
        system("cls");
    }

    for (int k = 0; k < 10; k++)
    {
        if (k < 5)
        {
            matrizC[k] = matrizA[k];
        }

        else
        {
            matrizC[k] = matrizB[k-5];
        }
    }

    printf("MATRIZ:\n");

    for (int l = 0; l < 10; l++)
    {
        printf("indice: %i, valor: %i\n", l, matrizC[l]);
    }

    system("pause");
}