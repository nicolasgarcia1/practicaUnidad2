#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1, nro2, nro3, resultado;
    printf("Ingrese un numero: "); scanf("%i", &nro1);
    printf("\nIngrese otro numero: "); scanf("%i", &nro2);
    printf("\nIngrese el ultimo numero: "); scanf("%i", &nro3);
    resultado = nro1 + nro2 + nro3;
    printf("\nSu resultado es: %i\n", resultado);
    system("pause");
    return 0;
}