#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5.
*/


// inicializo diccionario
 struct electrodomestico
    {
        int codBarras;
        char descripcion[100];
        int cantStock;
    };


// inicializo funciones
int cargaProductos(struct electrodomestico electrodomesticos[], int tam);
void modifStock(struct electrodomestico electrodomesticos[], int tam);
void sinStock(struct electrodomestico electrodomesticos[], int tam);
void muestraLista(struct electrodomestico electrodomesticos[], int tam);
void checkCodigoBarras (int *codigo);
void checkDescripcion (char *descripcion);


int cargaProductos(struct electrodomestico electrodomesticos[], int tam)
{
    int opcion = 0;

    system("cls");
    printf("**********CARGA DE PRODUCTOS**********\n\n");
    for (int i = 0; i < tam; i++)
    {
        if (electrodomesticos[i].codBarras == 0) // chequea que no haya un producto ingresado en ese espacio
        {
            printf("Producto %i\n", i+1);
            printf("Ingrese el codigo de barras: ");
            scanf("%i", &electrodomesticos[i].codBarras);
            checkCodigoBarras(&electrodomesticos[i].codBarras);

            printf("\nIngrese la descripcion del producto (hasta 100 caracteres): ");
            scanf("%s", electrodomesticos[i].descripcion);
            checkDescripcion(electrodomesticos[i].descripcion);

            printf("\nIngrese la cantidad: ");
            scanf("%i", &electrodomesticos[i].cantStock);
            while (electrodomesticos[i].cantStock < 0)
            {
                printf("Ingrese una cantidad valida: ");
                scanf("%i", &electrodomesticos[i].cantStock);
            }
            system("cls");

            printf("Productos ingresados hasta ahora: %i\n", i+1);
            do {
                printf("1-SI 2-NO\nDesea ingresar un nuevo producto?:\n");
                scanf("%i", &opcion);
            } while (opcion != 1 && opcion != 2);
            system("cls");

            if (opcion == 2)
            {
                return 0;
            }
        }
    }

    if (electrodomesticos[tam-1].codBarras != 0) // chequea que no se haya llenado el arreglo
        {
            printf("Se alcanzo el numero maximo de electrodomesticos.\n");
            system("pause");
            return 0;
        }
}


void modifStock(struct electrodomestico electrodomesticos[], int tam)
{
    int checkElectrodomesticoDisponible = 0; // chequea que haya algun electrodomestico ingresado
    int codigo, j = 0, nuevoStock;

    system("cls");
    printf("**********ELECTRODOMESTICOS DISPONIBLES**********\n");
    for (int i = 0; i < tam; i++)
    {
        if (electrodomesticos[i].codBarras != 0)
        {
            printf("Electrodomestico %i (%s)\nCodigo de barras: %i\n\n", i+1, electrodomesticos[i].descripcion, electrodomesticos[i].codBarras);
            checkElectrodomesticoDisponible = 1;
        }
    }    
    if (checkElectrodomesticoDisponible == 0)
    {
        printf("No hay electrodomesticos ingresados.\n\n");
        system("pause");
    }
    else 
    {
        printf("Ingrese el codigo de barras del electrodomestico a modificar stock: ");
        scanf("%i", &codigo);
        checkCodigoBarras(&codigo);
            
        int encontrado = 0; // bandera para saber si lo encuentra
        
        while (j < tam && encontrado == 0) // busqueda secuencial del codigo de barras
        {
            if (electrodomesticos[j].codBarras == codigo)
            {
                system("cls");
                printf("Electrodomestico %i (%s)\nCodigo de barras: %i\nStock actual: %i\n\nIngrese el nuevo stock: ", j+1, electrodomesticos[j].descripcion, electrodomesticos[j].codBarras, electrodomesticos[j].cantStock);
                scanf("%i", &nuevoStock);

                electrodomesticos[j].cantStock = nuevoStock;

                j = tam;
                encontrado = 1;
            }
            else 
            {
                j++; 
            }
        }

        if (encontrado == 0) // se muestra si no se encontro
        {
            printf("Electrodomestico inexistente.\n");
            system("pause");
        }
    }
}


void sinStock(struct electrodomestico electrodomesticos[], int tam)
{
    int checkProductoSinStock = 0, checkProductosIngresados = 0;

    system("cls");
    printf("**********PRODUCTOS SIN STOCK**********\n\n");
    for (int i = 0; i < tam; i++)
    {
        if (electrodomesticos[i].cantStock == 0 && electrodomesticos[i].codBarras != 0)
        {
            printf("Electrodomestico %i (%s) SIN STOCK\n\n", i+1, electrodomesticos[i].descripcion);
            checkProductoSinStock = 1;
        }

        if (electrodomesticos[i].codBarras != 0)
        {
            checkProductosIngresados = 1;
        }
    }

    if (checkProductosIngresados == 0)
    {
        printf("No hay productos ingresados.\n\n");
    }
    else 
    {
        if (checkProductoSinStock == 0)
        {
            printf("No hay productos sin stock.\n\n");
        }
    }

    system("pause");
}


void muestraLista(struct electrodomestico electrodomesticos[], int tam)
{
    int checkProductosCargados = 0;

    system("cls");
    printf("**********LISTA DE PRODUCTOS**********\n\n");
    for (int i = 0; i < tam; i++)
    {
        if (electrodomesticos[i].codBarras != 0)
        {
            printf("Electrodomestico %i (%s)\nCodigo de barras: %i\nCantidad en stock: %i\n\n\n", i+1, electrodomesticos[i].descripcion, electrodomesticos[i].codBarras, electrodomesticos[i].cantStock);
            checkProductosCargados = 1;
        }
    }

    if (checkProductosCargados == 0)
    {
        printf("No hay productos cargados todavia.\n\n");
    }

    system("pause");
}


void checkCodigoBarras(int *codigo) // chequea la longitud del codigo de barras y que no sea negativo
{
    while (*codigo > 99999999999999 || *codigo <= 0)
        {
            printf("Ingrese un codigo de barras valido: ");
            scanf("%i", codigo);
        }
}


void checkDescripcion(char *descripcion) // chequea la longitud de la descripcion
{
    while (strlen(descripcion) > 100)
    {
        printf("Ingrese una descripcion valida (max 100 caracteres): ");
        scanf("%s", descripcion);
    }
}



void main()
{
    int tam = 3; // cantidad de electrodomesticos maximos a cargar
    int opcion;
    struct electrodomestico electrodomesticos[tam];

    for (int i = 0; i < tam; i++)
    {
        electrodomesticos[i].codBarras = 0;
        strcpy(electrodomesticos[i].descripcion, "");
        electrodomesticos[i].cantStock = 0;
    }

    do{
        system("cls");
        printf("**********Bienvenido**********\n\n");
        printf("1. Cargar productos.\n2. Modificar stock.\n3. Mostrar productos sin stock.\n4. Listar productos.\n5. Salir.\nSeleccione una opcion: ");
        scanf("%i", &opcion);

        while (opcion < 1 || opcion > 5)
        {
            system("cls");
            printf("Opcion invalida, intente nuevamente.\n\n");
            printf("1. Cargar productos.\n2. Modificar stock.\n3. Mostrar productos sin stock.\n4. Listar productos.\n5. Salir.\nSeleccione una opcion: ");
            scanf("%i", &opcion);
        }

        if (opcion == 1)
        {
            cargaProductos(electrodomesticos, tam);
        }
        else if (opcion == 2)
        {
            modifStock(electrodomesticos, tam);
        }
        else if (opcion == 3)
        {
            sinStock(electrodomesticos, tam);
        }
        else if (opcion == 4)
        {
            muestraLista(electrodomesticos, tam);
        }
        else 
        {
            printf("\nGracias por usar nuestro sistema.\nvamo la lepra.\n\n");
            system("pause");
        }

    }while (opcion != 5);
}

