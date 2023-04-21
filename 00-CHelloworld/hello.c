
#include <stdio.h>

int main () {
    
    FILE *archivo;

    archivo = fopen("output.txt", "w");
    if(archivo == NULL){
        printf("No se pudo abrir el archivo\n");
        exit (1);
    }

    fprintf( archivo, "hello world\n");

    fclose(archivo);
}