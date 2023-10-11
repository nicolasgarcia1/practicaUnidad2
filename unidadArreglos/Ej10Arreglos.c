#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal.
*/

void main()
{
    int longMatriz, suma = 0;

    printf("ingrese la longitud deseada para su matriz cuadrada: ");
    scanf("%i", &longMatriz);
    system("cls");

    while (longMatriz <= 0)
    {
        printf("el valor NO debe ser 0 o negativo.\ningrese la longitud deseada para su matriz cuadrada: ");
        scanf("%i", &longMatriz);
        system("cls");
    }

    int matriz[longMatriz][longMatriz];

    for (int i = 0; i < longMatriz; i++)
    {
        for (int n = 0; n < longMatriz; n++)
        {
            printf("ingrese un numero: ");
            scanf("%i", &matriz[i][n]);
            system("cls");
        }
    }

    for (int j = 0; j < longMatriz; j++)
    {
        for (int k = 0; k < longMatriz; k++)
        {
            if (j != k)
            {
                suma += matriz[j][k];
            }
        }
    }

    printf("SUMA DE LA MATRIZ SIN SU DIAGONAL: %i \n", suma);
    system("pause");
    
}