#include <stdio.h>
#include <stdlib.h>

/*
Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
*/

void main()
{
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    int opcion;


    printf("ingrese su dni: ");
    scanf("%i", &dniIngresado);
    while (dniIngresado < 10000000 || dniIngresado > 99999999)
    {
        printf("\ningrese un dni valido: ");
        scanf("%i", &dniIngresado);
    }

    printf("\ningrese su pin numerico: ");
    scanf("%i", &passIngresado);
    while (passIngresado < 1000 || passIngresado > 9999)
    {
        printf("\ningrese un pin numerico valido (4 digitos): ");
        scanf("%i", &passIngresado);
    }

    if (dniIngresado == dni)
    {
        while (passIngresado != pass && intentos < 3)
        {   
            intentos ++;
            printf("\nPin incorrecto, ingrese nuevamente: ");
            scanf("%i", &passIngresado);
        }

        if (passIngresado == pass && intentos < 4) 
        {
            printf("\n1- Consultar saldo \n2- Consultar CBU\n3- Salir\nIngrese una opcion: ");
            scanf("%i", &opcion);
            while (opcion != 3)
            {
                while (opcion < 1 || opcion > 3)
                {
                    printf("\n1- Consultar saldo \n2- Consultar CBU\n3- Salir\nIngrese una opcion valida: ");
                    scanf("%i", &opcion);
                }

                if (opcion == 1)
                {
                    printf("\nSu saldo es: $%i\n",saldo);
                }

                else 
                {
                    printf("Su CBU es: %i\n", cbu);
                }

                printf("\n1- Consultar saldo \n2- Consultar CBU\n3- Salir\n");
                scanf("%i", &opcion);
            }

            printf("\nSaliendo del programa.\n");
            system("pause");
        }

        else
        {
            printf("\nSe ha ingresado incorrectamente el pin demasiadas veces.\n");
            system("pause");
        }    
    }

    else 
    {
        printf("\nDNI no registrado.\n");
        system("pause");
    }
}