#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1, nro2, resultado;
    printf("Ingrese un numero: "); scanf("%i", &nro1);
    printf("\nIngrese un numero: "); scanf("%i", &nro2);
    resultado = nro1 + nro2;
    printf("\nSu resultado es: %i\n", resultado);
    system("pause");
    return 0;
}