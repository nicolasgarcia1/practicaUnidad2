#include <stdio.h>
#include <stdlib.h>

//El siguiente código abre un archivo llamado "ejemplo1.txt" en modo lectura y 
//lee dentro de él 

void main () 
{ 
    FILE *fp; 
    
    char texto[100];

    //abrimos el archivo, en modo lectura 
    fp = fopen("ejemplo1.txt", "r"); 
    
     //leemos el texto hasta un espacio y 
    //lo almacenamos en el array texto  
    fgets(texto, texto, fp); 
    

    printf("La primer palabra del archivo es: \n"); 
    
    //imprimimos en consola lo almacenado en el array texto 
    printf("%s \n",texto);
    

    fclose (fp); 
    
    //cerramos el archivo 
    system("pause");
}