#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, j, nota, sumador = 0, sumadorTotal = 0;
    float promedioAlumno, promedioGeneral;

    for (i = 1; i <= 5;i++) 
    {
        for ( j = 1; j <= 3; j++)
        {
            printf("\nIngrese la nota: ");
            scanf("%i", &nota);
            sumador += nota;
        }
        sumadorTotal += sumador;
        printf("%i", sumadorTotal);
        promedioAlumno = (float)sumador / 3;
        printf("\nPromedio del alumno %i es: %0.2f",i ,promedioAlumno);
        sumador = 0;
    }
    promedioGeneral = (float)sumadorTotal / 15;
    printf("\nEl promedio general es: %0.2f\n", promedioGeneral);
    system("pause");
}