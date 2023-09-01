#include <stdio.h>
#include <stdlib.h>

void main(){
    int nota;
    float promedio, totalNotas;
    printf("Ingrese la nota de los 20 alumnos para calcular el promedio: \n");

    for (int i=0; i < 20; i++) {
        scanf("%i", &nota);
        totalNotas = totalNotas + nota;
    }

    promedio = totalNotas / 20;
    printf("\nEl promedio del curso fue: %f\n", promedio);
    system("pause");
}