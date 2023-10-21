#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ingresar por consola los nombres de 10 alumnos, cargarlos en un array  y mostrarlos .
void main()
{
    char nombres[10][50]; // El primer corchete indica la cantidad de nombres que necesito almacenar.
                          // El segundo corchete indica la longitud máxima de cada nombre,
                          // es decir los 10 nombres ingresados deberán tener menos de 50 caracteres.

    char nombreABuscar[50];

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el nombre %d\n", i + 1);
        // scanf("%s", &nombres[i]);
        fgets(nombres[i], sizeof(nombres[i]), stdin);
    }

    // nombreABuscar = "eliana"; //Incorrecto
    // lo correcto es usar strcpy(arg1, arg2) Copia arg2 en arg1
    strcpy(nombreABuscar, "eliana");
    // quiero buscar un nombre en el arreglo nombres
    printf("Ingrese el nombre a buscar");
    scanf("%s", &nombreABuscar);

    for (int i = 0; i < 10; i++)
    {
        /*
        if(nombres[i] == nombreABuscar) //ESTO NO ES VÁLIDO!!!!!!!!
        {
            printf("Lo encontre");
        }
        */
        // LA FORMA DE COMPARAR UNA CADENA CON OTRA ES USANDO LA FUNCIÓN strcmp(arg1, arg2)
        int resultado = strcmp(nombres[i], nombreABuscar);
        if (resultado == 0)
        {
            printf("Lo encontre");
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", nombres[i]);
    }
    system("pause");
}