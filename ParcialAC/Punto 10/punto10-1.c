// Punto 10 - 1
// Ingrese e imprima elementos de un arreglo usando un puntero.
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>

int main(){
    int arr[10];
    int *ptr = arr;
    int largo, j=0;

    printf("\tPrograma que ingrese e imprima elementos de un arreglo usando un puntero\n");

    
    for(int i=0; i<10; i++){
        j++;
        printf("\nIngese los elementos del arreglo (%d): ", j);
        scanf("%d", ptr);
        ptr++;
    }

    ptr=arr;

    printf("\n\tLos elementos son: ");
    for(int i=0; i<10; i++){
        printf("\nElemento: %d ", *ptr);
        ptr++;
    }
    printf("\n");

}