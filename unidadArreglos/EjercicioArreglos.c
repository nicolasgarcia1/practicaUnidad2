#include <stdio.h>
#include <stdlib.h>

/*
Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10.
La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.
La opción 4 debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5.
*/

void main()
{
    int dnis[10] = {0};
    float notas[10] = {0};

    // float alumnos[10][2] = {0};

    int opcion;
    int tam = 10;
    int dniABuscar;

    do
    {
        int indice = 0;
        system("cls");
        printf("\nElija una opci%cn\n", 162);
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar una nota\n");
        printf("4. Mostrar alumnos\n");
        printf("5. Salir.\n\n");
        scanf("%d", &opcion);if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                for (int i = 0; i < tam; i++)
                {   
                    do
                    {
                        system("cls");
                        printf("ingrese el dni: ");
                        scanf("%d", &dnis[i]);
                    } while (dnis[i] < 1000000 || dnis[i] > 99999999);
                    
                    do
                    {   
                        system("cls");
                        printf("ingrese la nota: ");
                        scanf("%f", &notas[i]);
                    } while (notas[i] <= 0 || notas[i] > 10);
                }
                break;
            case 2:
                do
                {
                    system("cls");
                    printf("Ingrese el dni del alumno a buscar: ");
                    scanf("%d", &dniABuscar);
                } while (dniABuscar < 1000000 || dniABuscar > 99999999);

                /*for (int i = 0; i < tam; i++)
                {
                    if(dniABuscar == dnis[i])
                    {
                        printf("La nota del alumno con dni %d es %.2f", dnis[i], notas[i]);
                        i = 11;
                    }
                }
                */

                while(dniABuscar != dnis[indice] && indice < tam)
                {
                    indice++;
                }

                if(dniABuscar == dnis[indice])
                    {
                        system("cls");
                        printf("La nota del alumno con dni %d es %.2f", dnis[indice], notas[indice]);
                        system("pause");
                    }
                else
                {
                    printf("DNI no registrado.\n");
                    system("pause");
                }

                break;
            case 3:
                do
                {
                    system("cls");
                    printf("Ingrese el dni del alumno: ");
                    scanf("%d", &dniABuscar);
                } while (dniABuscar < 1000000 || dniABuscar > 99999999);

                while(dniABuscar != dnis[indice] && indice < tam)
                {
                    indice++;
                }

                if(dniABuscar == dnis[indice])
                    {
                        system("cls");
                        printf("ingrese la nueva nota del alumno: ");
                        scanf("%f", &notas[indice]);
                    }
                else 
                {
                    printf("DNI no registrado.\n");
                    system("pause");
                }
                break;
            case 4:
                system("cls");
                for (int j = 0; j < tam; j++)
                {
                    printf("Alumno: %d - | nota: %0.2f\n", dnis[j], notas[j]);
                }
                system("pause");
                break;
            default:
                printf("opción inválida");
                break;
            }
        }
    } while (opcion != 5);
}