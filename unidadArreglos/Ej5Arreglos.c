#include <stdio.h>
#include <stdlib.h>

/*
Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
a. Informar la inflación anual
b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 =
0.1
c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 =
0.9
*/

void main()
{
    float vector[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float inflacionAnual = 0, inflacionBaja = vector[0], inflacionAlta = vector[0];
    int  indiceAlta = 1, indiceBaja = 1;

    for (int i = 0; i < 12; i++)
    {
        inflacionAnual = inflacionAnual + vector[i];
    }
    printf("Inflacion anual: %0.1f\n", inflacionAnual);

    for (int j = 0; j < 12; j++)
    {
        if (vector[j] < inflacionBaja)
        {
            inflacionBaja = vector[j];
            indiceBaja = j+1;
        }
    }
    printf("La inflacion del mes %i fue la mas baja con: %0.1f\n", indiceBaja, inflacionBaja);

    for (int k = 0; k < 12; k++)
    {
        if (vector[k] > inflacionAlta)
        {
            inflacionAlta = vector[k];
            indiceAlta = k+1;
        }
    }
    printf("La inflacion del mes %i fue la mas alta con: %0.1f\n", indiceAlta, inflacionAlta);
    system("pause");
    
}