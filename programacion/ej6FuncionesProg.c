#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*
Realizar un programa que muestre la siguiente opción de menú al usuario:
“1- Mostrar lista de corredores 2 - Mostrar los tres mejores 3- Mostrar lista de completa de
resutados 4 - salir.”
2
La opción 1 se llevará a cabo mediante un subproceso llamado “ListaCorredores” que
mostrará al usuario los nombres y apellidos de los corredores, la opción 2 llama a otro
subproceso llamado “ListaMejores” que mostrará a los corredores que salieron en las
primeras 3 posiciones, la opción 3 llamará a un subproceso llamado “ListaPosiciones” que
mostrará la lista de corredores con sus posiciones y la opción 4 es la salida del sistema.
Nota: la lista de corredores y los resultados de la carrera se guardarán en un arreglo. El
sistema tiene que mostrar de nuevo las opciones de menú una vez que la solicitud del
usuario se haya completado y hasta tanto el usuario ingrese la opción de salida.
*/

// declaracion de funciones
void listaCorredores(char corredores[][2]);
void listaMejores(char corredores[][2]);
void listaPosiciones(char corredores[][2]);
void cleaner();

void listaCorredores(char corredores[][2])
{
    cleaner();
    for (int i = 0; i < 10; i++)
    {
        printf("Corredor %d: %s\n", i+1, corredores[i][0]);
    }
}

void listaMejores(char corredores[][2])
{
    char arregloAux[][2] = {"", ""};
    char tresMejores[][2] = 
    {
    {"", ""},
    {"", ""},
    {"", ""}
    };
    for (int i = 0; i < 10; i++)
    {
        if (corredores[i][1] <= 3)
        {
            for (int j = 0; j < 3; j++)
            {
                if (strcmp(tresMejores[j][0], "") || corredores[i][1] < tresMejores[j][1])
                {
                    strcpy(arregloAux[0][0], tresMejores[j][0]);
                    strcpy(arregloAux[0][1], tresMejores[j][1]);
                    strcpy(tresMejores[j][0], corredores[i][0]);
                    strcpy(tresMejores[j][1], corredores[i][1]);
                    if (j < 2)
                    {
                        strcpy(tresMejores[j+1][0], arregloAux[0][0]);
                        strcpy(tresMejores[j+1][1], arregloAux[0][1]);
                    }
                }
            }

            for (int k = 0; k < 3; k++)
            {
                printf("%d° lugar: %s\n", k+1, tresMejores[k][0]);
            }
        }
    }
}

void listaPosiciones(char corredores[][2])
{
    char arregloAux[][2] =
    {
    {"", ""},
    {"", ""},
    {"", ""},
    {"", ""},
    {"", ""},
    {"", ""},
    {"", ""},
    {"", ""},
    {"", ""},
    {"", ""},
    };

    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            strcpy(arregloAux[i][k], corredores[i][k]);
        }
    }

    for (int l = 0; l < 10; l++)
    {
        if (arregloAux[l][1] > )
        {

        }
    }
}

void cleaner()
{
    system("cls");
}

void main()
{
    int opcion = 0;
    char corredores[][2] = 
    {
    {"Pedro Gomez", "7"},
    {"Martín Ceres", "6"},
    {"Ernestina Diaz", "1"},
    {"Gastón Bautista", "2"},
    {"Dalma Alvarez", "8"},
    {"Patricio Fernandez", "3"},
    {"Faustina Martinez", "10"},
    {"Andrea Perez", "9"},
    {"Hilda Lopez", "4"},
    {"León García", "5"},
    };

    do{
        printf("1 - Mostrar lista de corredores\n");
        printf("2 - Mostrar los tres mejores\n");
        printf("3- Mostrar lista de completa de resultados\n");
        printf("4 - Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        while (opcion < 1 || opcion > 4)
        {
            cleaner();
            printf("1 - Mostrar lista de corredores\n");
            printf("2 - Mostrar los tres mejores\n");
            printf("3- Mostrar lista de completa de resultados\n");
            printf("4 - Salir\n");
            printf("Ingrese una opcion correcta: ");
            scanf("%d", &opcion);
        }

        if (opcion == 1)
        {
            listaCorredores(corredores);
        }
        else if (opcion == 2)
        {
            listaMejores(corredores);
        }
        else if (opcion == 3)
        {
            listaPosiciones(corredores);
        }
    }while (opcion != 4);

    printf("saliendo...\n");
    sleep(2);
}