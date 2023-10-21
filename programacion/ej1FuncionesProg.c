#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Realizar un programa que llame a un subproceso que pida al usuario ingresar el nombre, el
apellido y la edad de una persona, luego llamar a otro subproceso que muestre por pantalla
los datos de la persona.
*/

void datos(char *nombre, char *apellido, int *edad);
void muestraDatos(char *nombre, char *apellido, int edad);
void cleaner();


void datos(char *nombre, char *apellido, int *edad)
{
    // funcion para cargar los datos
    printf("ingrese el nombre: ");
    scanf("%s", nombre);
    cleaner();
    printf("ingrese el apellido: ");
    scanf("%s", apellido);
    cleaner();
    printf("ingrese la edad: ");
    scanf("%d", edad);
    cleaner();
}

void muestraDatos(char *nombre, char *apellido, int edad)
{
    // funcion para mostrar datos
    printf("nombre y apellido: %s %s", nombre, apellido);
    printf("\nedad: %d", edad);
    printf("\n");
    system("pause");

}

void cleaner()
{
    // esta funcion borra la pantalla
    system("cls");
}

void main()
{
    char nombre[25], apellido[25];
    int edad = 0;
    datos(nombre, apellido, &edad);
    muestraDatos(nombre, apellido, edad);
}
