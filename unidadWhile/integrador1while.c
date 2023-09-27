#include <stdio.h>
#include <stdlib.h>

/*
La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
● Número de pasajeros que lleve
● Tipo horario del día:
Horario A: horas de “Alta” congestión:
● Los automóviles con tres pasajeros o más no pagan peaje
● Los camiones pagan $300
● Las motos pagan $100
Horario B: horas de “Baja” congestión:
● Los automóviles pagan $150
● Los camiones pagan $200
● Las motos no pagan peaje
En este horario la tarifa es independientemente del número de pasajeros.
Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.
*/

void main()
{
    int tipoVehiculo, tipoHorario, cantPasajeros;

    printf("Seleccione horario \n1- tipo A (alta congestion) \n2- tipo B (baja congestion)\n");
    scanf("%i",&tipoHorario);
    while (tipoHorario < 1 || tipoHorario > 2)
    {
        printf("\nSeleccione un horario valido \n1- tipo A (alta congestion)\n2- tipo B (baja congestion)\n");
        scanf("%i",&tipoHorario);
    }

    printf("\nSeleccione tipo de automovil \n1-Automovil \n2-Camion \n3-Moto\n");
    scanf("%i", &tipoVehiculo);
    while (tipoVehiculo < 1 || tipoVehiculo > 3)
    {
        printf("\nSeleccione tipo de automovil valido \n1-Automovil \n2-Camion \n3-Moto\n");
        scanf("%i", &tipoVehiculo);
    }

    if (tipoHorario == 1)
    {
        if (tipoVehiculo == 1)
        {
            printf("\nIngrese cantidad de pasajeros (max 5): ");
            scanf("%i", &cantPasajeros);
            while (cantPasajeros < 1 || cantPasajeros > 5)
            {
                printf("\nIngrese cantidad de pasajeros valida (max 5): ");
                scanf("%i", &cantPasajeros);
            }

            if (cantPasajeros > 3)
            {
                printf("\nEl vehiculo no abona peaje.\n");
                system("pause");
            }
            else
            {
                printf("\nEl vehiculo abona $??? pesos.\n");
                system("pause");
            }
        }

        else if (tipoVehiculo == 2)
        {
            printf("\nEl vehiculo abona $300 pesos.\n");
            system("pause");
        }

        else
        {
            printf("\nEl vehiculo abona $100 pesos.\n");
            system("pause");
        }
    }

    else
    {
        if (tipoVehiculo == 1)
        {
            printf("\nEl vehiculo abona $150 pesos.\n");
            system("pause");
        }
        
        else if (tipoVehiculo == 2)
        {
            printf("\nEl vehiculo abona $200 pesos.\n");
            system("pause");
        }

        else 
        {
            printf("\nEl vehiculo no abona peaje.\n");
            system("pause");
        }
    }

}