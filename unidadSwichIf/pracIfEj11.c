#include <stdio.h>
#include <stdlib.h>

/*
Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.
*/

void main() {
    float num1, num2, resultado;
    int opcion;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Salir\nSeleccione una operacion: ");
    scanf("%i", &opcion);

    switch (opcion) {
    case 1:
        resultado = num1 + num2;
        printf("\nEl resultado de la suma es: %0.2f\n", resultado);
        system("pause");
        break;
        
    case 2:
        resultado = num1 - num2;
        printf("\nEl resultado de la resta es: %0.2f\n", resultado);
        system("pause");
        break;
    
    case 3: 
        resultado = num1 * num2;
        printf("\nEl resultado de la multiplicacion es: %0.2f\n", resultado);
        system("pause");
        break;
    
    case 4:
        resultado = num1 / num2;
        printf("\nEl resultado de la division es: %0.2f\n", resultado);
        system("pause");
        break;
    
    case 5:
        printf("\nUsted eligio salir del programa.\n");
        system("pause");
        break;
    
    default:
        printf("\nOpcion no valida.\n");
        system("pause");
    }

}