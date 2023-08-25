#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1, nro2, suma, resta, multiplicacion;
    printf("Ingrese un numero: "); scanf("%i", &nro1);
    printf("\nIngrese un numero: "); scanf("%i", &nro2);
    suma = nro1 + nro2;
    resta = nro1 - nro2;
    multiplicacion = nro1 * nro2;
    printf("\La suma de los numeros es %d, la resta es %d y la multiplicacion es %d\n", suma, resta, multiplicacion);
    system("pause");
    return 0;
}