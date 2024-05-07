#include <stdio.h>

int main()
{
    printf("hello world.\n");

    FILE* archivo;
    //abrimos el archivo
    archivo=fopen("output.txt","w");
    
    if (archivo==NULL){
        printf("error al abrir archivo.\n");

    }
    
    fprintf(archivo, "Ejemplo de un archivo en C.\n");
    //cerramos el archivo 
    fclose(archivo);
    

    return 0;



}

