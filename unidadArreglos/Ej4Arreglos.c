#include <stdio.h>
#include <stdlib.h>

/*
Dado el vector {10, 20, 5, 15, 30, 20}
a. Informar el vector de la forma: "Indice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen numeros impares.
e. Informar el mayor numero.
f. Informar cuantas veces aparece el numero 20. 
*/

void main()
{
    int vector[] = {10, 20, 5, 15, 30, 20};
    int suma = 0, mayor = 0, contador = 0, opcion;

    printf("vector {10, 20, 5, 15, 30, 20}\n1. Informar el vector de la forma: Indice: X, Valor: Y.\n2. Totalizar el vector e informar el total.\n3. Informar el contenido de las posiciones impares.\n4. Informar las posiciones que contienen numeros impares.\n5. Informar el mayor numero.\n6. Informar cuantas veces aparece el numero 20.\n7. Salir\nSeleccione una opcion: ");
    scanf("%i", &opcion);
    while (opcion < 1 || opcion > 7)
    {
        system("cls");
        printf("vector {10, 20, 5, 15, 30, 20}\n1. Informar el vector de la forma: Indice: X, Valor: Y.\n2. Totalizar el vector e informar el total.\n3. Informar el contenido de las posiciones impares.\n4. Informar las posiciones que contienen numeros impares.\n5. Informar el mayor numero.\n6. Informar cuantas veces aparece el numero 20.\n7. Salir\nSeleccione una opcion valida: ");
        scanf("%i", &opcion);
    }

    while (opcion != 7)
    {
        if (opcion == 1)
        {
            system("cls");
            for (int i = 0; i < 6; i++)
            {
                printf("indice: %i, valor %i\n", i, vector[i]);
            }
            system("pause");
        }

        else if (opcion == 2)
        {   
            system("cls");
            for (int j = 0; j < 6; j++)
            {
                suma += vector[j];
            }

            printf("vector total: %i\n", suma);
            system("pause");
        }

        else if (opcion == 3)
        {
            system("cls");
            for (int k = 0; k < 6; k++)
            {
                if (k % 2 != 0)
                {
                    printf("posicion: %i, contenido: %i\n", k, vector[k]);
                }
            }
            system("pause");
        }

        else if (opcion == 4)
        {
            system("cls");
            for (int l = 0; l < 6; l++)
            {
                if (vector[l] % 2 != 0)
                {
                    printf("posicion: %i contiene un valor impar (%i)\n", l, vector[l]);
                }
            }
            system("pause");
        }

        else if (opcion == 5)
        {
            system("cls");
            for (int m = 0; m < 6; m++)
            {
                if (vector[m] > mayor)
                {
                    mayor = vector[m];
                }
            }
            printf("el numero mayor es: %i\n", mayor);
            system("pause");
        }

        else
        {
            system("cls");
            for (int n = 0; n < 6; n++)
            {
                if (vector[n] == 20)
                {
                    contador++;
                }
            }
            printf("el numero 20 aparece %i veces.\n", contador);
            system("pause");
        }

        system("cls");

        printf("vector {10, 20, 5, 15, 30, 20}\n1. Informar el vector de la forma: Indice: X, Valor: Y.\n2. Totalizar el vector e informar el total.\n3. Informar el contenido de las posiciones impares.\n4. Informar las posiciones que contienen numeros impares.\n5. Informar el mayor numero.\n6. Informar cuantas veces aparece el numero 20.\n7. Salir\nSeleccione una opcion: ");
        scanf("%i", &opcion);
        while (opcion < 1 || opcion > 7)
        {
            system("cls");
            printf("vector {10, 20, 5, 15, 30, 20}\n1. Informar el vector de la forma: Indice: X, Valor: Y.\n2. Totalizar el vector e informar el total.\n3. Informar el contenido de las posiciones impares.\n4. Informar las posiciones que contienen numeros impares.\n5. Informar el mayor numero.\n6. Informar cuantas veces aparece el numero 20.\n7. Salir\nSeleccione una opcion valida: ");
            scanf("%i", &opcion);
        }

    }
}