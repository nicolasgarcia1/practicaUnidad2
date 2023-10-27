#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char cadenas[3][30];
    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese una cadena: ");
        fgets(cadenas[i], 30, stdin);
    }
    
    printf("sus cadenas son:\n%s\n%s\n%s\n\n", cadenas[0], cadenas[1], cadenas[2]);
    printf("sus longitudes son %i, %i, %i\n", strlen(cadenas[0]), strlen(cadenas[1]), strlen(cadenas[2]));

    system("pause");*/
    

    /*char nombres[2][30];
    for (int i = 0; i < 2; i++)
    {
        printf("ingrese un nombre: ");
        fgets(nombres[i], 30, stdin);
    }

    if (strcmp(nombres[0], nombres[1]) == 0)
    {
        printf("los nombres son iguales.\n");
    }
    else if (strcmp(nombres[0], nombres[1]) < 0)
    {
        printf("el primer nombre por orden alfabetico es: %s", nombres[0]);
    }
    else 
    {
        printf("el primer nombre por orden alfabetico es: %s", nombres[1]);
    }

    system("pause");*/

    char nombres[2][30], apellidos[2][30], nombreyapellido[2][60];

    for (int i = 0; i < 2; i++)
    {
        printf("ingrese el nombre del alumno %i: ", i+1);
        fgets(nombres[i], 30, stdin);
        if (nombres[i][strlen(nombres[i])-1] == '\n')
        {
            nombres[i][strlen(nombres[i])-1] = '\0';
        }

        printf("ingrese el apellido del alumno %i: ", i+1);
        fgets(apellidos[i], 30, stdin);
        if (apellidos[i][strlen(apellidos[i])-1] == '\n')
        {
            apellidos[i][strlen(apellidos[i])-1] = '\0';
        }
    }

    for (int j = 0; j < 2; j++)
    {
        strcpy(nombreyapellido[j], nombres[j]);
        strcat(nombreyapellido[j], " ");
        strcat(nombreyapellido[j], apellidos[j]);
    }

    for (int k = 0; k < 2; k++)
    {
        printf("Alumno %i:\n%s\n", k+1, nombreyapellido[k]);
    }
    system("pause");
}