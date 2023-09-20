#include <stdio.h>
#include <stdlib.h>

/*
Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y
switch:
“Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.”
Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación:
*/

void main() {
    float num1, num2, resultado;
    int opcion, contador;
    contador = 0;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
    scanf("%i", &opcion);


    while (opcion != 6)
    {
        if (opcion == 1)
        {
            resultado = num1 + num2;
            printf("\nEl resultado de la suma es: %0.2f\n", resultado);
            contador += 1;

            printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
            scanf("%i", &opcion);
        }
            
        else if (opcion == 2)
        {
            resultado = num1 - num2;
            printf("\nEl resultado de la resta es: %0.2f\n", resultado);
            contador += 1;

            printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
            scanf("%i", &opcion);
        }
            
        else if (opcion == 3)
        { 
            resultado = num1 * num2;
            printf("\nEl resultado de la multiplicacion es: %0.2f\n", resultado);
            contador += 1;

            printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
            scanf("%i", &opcion);
        }
            
        else if (opcion == 4){
            resultado = num1 / num2;
            printf("\nEl resultado de la division es: %0.2f\n", resultado);
            contador += 1;

            printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
            scanf("%i", &opcion);
        }
            
        else if (opcion == 5)
        {
            printf("\nCantidad de operaciones realizadas hasta el momento: %i\n", contador);

            printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
            scanf("%i", &opcion);
        }
        else
        {
            printf("\n Ingrese un numero valido. \n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas\n6. Salir\nSeleccione una operacion: ");
            scanf("%i", &opcion);
        }        
    }
    printf("\nSalir del programa.\n");
    system("pause");
}