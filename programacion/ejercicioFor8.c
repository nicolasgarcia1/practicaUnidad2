#include <stdio.h>
#include <stdlib.h>

void main() {
    int nota, acumulador = 0, alumnos = 1, opcion;
    float promedio;

    printf("Ingrese la primer nota: ");
    scanf("%i", &nota);
    acumulador += nota;

    for (int i = 1; i <= alumnos; i++) {
        printf("\nDesea ingresar una nueva nota?: 1-Si 2-No: ");
        scanf("%i", &opcion);

        if (opcion == 1) {
            printf("\nIngrese la nueva nota: ");
            scanf("%i", &nota);
            acumulador += nota;
            alumnos++;
        } else if (opcion == 2) {
            promedio = (float)acumulador / alumnos;
            printf("\nEl promedio de los %i alumnos es: %f\n", alumnos, promedio);
            system("pause");
        } else {
            printf("Opción no válida. Ingrese 1 para agregar una nueva nota o 2 para terminar.\n");
            system("pause");
        }
    }

}