#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int alumnos[10][2];
    int opcion;

    do
    {
        system("cls");
        printf("1. Cargar Alumnos\n2. Buscar un alumno\3. Modificar la nota de un alumno\n4. Mostrar un listado de los 10 alumnos\n5. Salir.\nIngrese una opcion: ");
        scanf("%i", &opcion);
        while (opcion < 1 || opcion > 5)
        {
            system("cls");
            printf("1. Cargar Alumnos\n2. Buscar un alumno\3. Modificar la nota de un alumno\n4. Mostrar un listado de los 10 alumnos\n5. Salir.\nIngrese una opcion valida: ");
            scanf("%i", &opcion);
        }


    } while (opcion != 5);
    
}