#include <stdio.h>
#include <stdlib.h>

/*
Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante
*/

void main()
{
    int arreglo[] = {0, 0, 0, 0, 0};
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\ningrese un numero: ");
        scanf("%i", &arreglo[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Indice: %i, valor: %i\n", j, arreglo[j]);
    }

    printf("Nuevo valor de atras hacia adelante\n");

    for (int k = 4; k >= 0; k--)
    {
        printf("Indice: %i, valor: %i\n", contador, arreglo[k]);
        contador ++;
    }

    system("pause");
}