#include <stdlib.h>
#include <stdio.h>

/*
Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio. 
*/

void main()
{
    int cantidadNotas;
    float sumaNotas = 0, promedio;

    printf("ingrese la cantidad de notas a cargar: ");
    scanf("%i", &cantidadNotas);
    while (cantidadNotas < 0 || cantidadNotas > 100)
    {   
        system("cls");
        printf("cantidad invalida, ingrese la cantidad de notas a cargar: ");
        scanf("%i", &cantidadNotas);
    }

    system("cls");
    float notas[cantidadNotas];

    for (int i = 0; i < cantidadNotas; i++)
    {
        printf("ingrese la nota %i: ", i+1);
        scanf("%f", &notas[i]);
        while (notas[i] < 1.0 || notas[i] > 10.0)
        {
            system("cls");
            printf("ingrese una nota valida %i: ", i+1);
            scanf("%f", &notas[i]);
        }
        system("cls");
    }

    for (int j = 0; j < cantidadNotas; j++)
    {
        sumaNotas += notas[j];
    }

    promedio = sumaNotas / cantidadNotas;

    printf("la suma de las notas es %0.2f\n", sumaNotas);
    printf("el promedio es %0.2f\n", promedio);
    system("pause");
}