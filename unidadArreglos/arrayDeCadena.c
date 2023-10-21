#include <stdio.h>
#include <stdlib.h>
// Realizar un programa que permita ingresar  al usuario su nombre y lo muestre por consola.
void main()
{
    char nombreUsuario[50];

    printf("Ingrese su nombre: \n");
    // scanf("%s", &nombreUsuario);
    fgets(nombreUsuario, sizeof(nombreUsuario), stdin); // la funcion más adecuada para leer cadenas

    printf("El nombre ingresado es: %s\n", nombreUsuario);

    system("pause");
}