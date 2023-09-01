#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int const pagoHora = 800;
    int horasTrabajadas, pagoTotal;

    printf("Ingrese la cantidad de horas que trabajo: "); scanf("%d", &horasTrabajadas);
    pagoTotal = pagoHora * horasTrabajadas;
    printf("\nA usted le corresponden %d pesos\n", pagoTotal);
    system("pause");
    return 0;
}