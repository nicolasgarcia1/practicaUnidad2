#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorHora, horasTrabajadas, total;
    printf("Ingrese el valor por hora trabajada: "); scanf("%d", &valorHora);
    printf("\nIngrese cuantas horas trabajo: "); scanf("%d", &horasTrabajadas);
    total = valorHora * horasTrabajadas;
    printf("\A usted le corresponden %d pesos\n", total);
    system("pause");
    return 0;
}