#include <stdio.h>
#include <stdlib.h>

/*
Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.
*/

void main()
{
    int arreglo[] = {0, 0, 0, 0, 0};
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numerillo: ");
        scanf("%i", &arreglo[i]);
        printf("\n");
        if (arreglo[i] == 5)
        {
            contador ++;
        }
    }

    printf("Se ingresaron %i cinco(s)\n", contador);
    system("pause");

}