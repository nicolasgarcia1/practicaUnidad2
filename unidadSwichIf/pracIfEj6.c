#include <stdio.h>
#include <stdlib.h>

/*
Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”
*/

void main() {
    int nota;

    printf("Ingrese la nota del alumno: ");
    scanf("%i", &nota);

    if (nota >= 6) {
        printf("\nEl alumno promociona\n");
        system("pause");
    }
    else if (nota < 6 && nota >= 4) {
        printf("El alumno regularizo\n");
        system("pause");
    }
    else {
        printf("El alumno reprueba\n");
        system("pause");
    }
}