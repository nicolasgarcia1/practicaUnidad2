#include <stdio.h>
#include <stdlib.h>

/*
Una comisión tiene 55 alumnos, de cada uno de los cuales se tienen las notas de los 6 parciales que han rendido. Mostrar el promedio de las notas de cada uno de los alumnos.
*/

int sumador = 0, nota = 0;
float promedio = 0;

void main() {
    for (int i=1; i <= 55; i++)
    {   
        printf("Ingrese las 6 notas del alumno: \n");
        for (int j=1; j <= 6; j++)
        {
            scanf("%i", &nota);
            sumador = sumador + nota;
        }
        promedio = (float)sumador / 6;
        printf("El promedio del alumno %i es: %0.2f\n", i, promedio);
        sumador = 0;
    }
}