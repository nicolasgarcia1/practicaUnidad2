#include <stdio.h>
#include <stdlib.h>

/*
Se tienen como dato los importes de todas las facturas correspondientes al mes que acaba de finalizar de un comercio (no se sabe cuántas son). Se desea conocer: Cuántas ventas se realizaron. Importe promedio de las mismas Cuántos son los importes que superan los 30 pesos
*/

void main() {
    float venta = 0, promedio = 0, contadorPromedio = 0;
    int contadorVentas = 0, contador30pe = 0;

    printf("Ingrese una venta (0 para finalizar programa): $");
    scanf("%f", &venta);
    while (venta != 0)
    {
        contadorVentas += 1;
        contadorPromedio += venta;
        if (venta > 30)
        {
            contador30pe += 1;
        }
        printf("\nIngrese una nueva venta (0 para finalizar programa): $");
        scanf("%f", &venta);
    }

    promedio = contadorPromedio / contadorVentas;
    printf("\nVentas totales: %i\nImporte promedio: $%0.2f\nImportes que superan los 30pe: %i\n", contadorVentas, promedio, contador30pe);
    system("pause");
}