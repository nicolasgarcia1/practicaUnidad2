#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crear una función que devuelva la primera letra de una cadena de texto
*/

char primerLetra(char cadena[]);

char primerLetra(char cadena[])
{
    char letra;
    letra = cadena[0];
    return letra;
}

void main() {
    char letra;
    char cadena[21];
    int intentos = 5;

    printf("Ingrese una cadena de texto (hasta 20 caracteres): ");
    scanf("%s", cadena);

    while (strlen(cadena) > 20 || intentos > 0)
    {
        system("cls");
        intentos = intentos - 1;
        printf("acceso invalido. intentos restantes: %i\n", &intentos);
        printf("Ingrese una cadena de texto valida (hasta 20 caracteres): ");
        scanf("%s", cadena);
    }
    
    if (intentos < 0)
    {
        system("cls");
        printf("Demasiados intentos, autodestruccion en 3.. 2.. 1..");
        system("pause");
    }
    else
    {
        letra = primerLetra(cadena);

        printf("la primer letra es: %c\n", letra);
        system("pause");
    }
    
}