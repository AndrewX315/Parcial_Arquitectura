// Punto 10 - 2
// Intercambie dos arreglos usando punteros.
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>
#include <stdlib.h>

# define MAX 15

void inicializar(int arreglo [MAX]){

    for(int i = 0; i < MAX; i++){
        arreglo[i] = rand()%101;
    }
}

void imprimir(int arr[MAX]){
    for(int i = 0; i < MAX; i++){
        printf("%d  \n", arr[i]);
    }
    printf("\n");
}

int main(){

    int arrA [MAX];
    int arrB [MAX];

    int *p_arrA;
    int *p_arrB;
    int *temp;

    printf("\tPrograma que intercambia dos arreglos registrados mediante el uso de ficheros ");

    //Llenar Arreglo A
    for(int i = 0; i < MAX; i++){
        arrA[i] = rand() % 101;
    }

    //Llenar Arreglo B
    for(int i = 0; i < MAX; i++){
        arrB[i] = rand() % 101;
    }
    
    printf("\nArreglos originales: \n");
    printf("Arreglo A: \n");
    imprimir(arrA);
    p_arrA = &arrA[0];
    
    printf("Arreglo B: \n");      
    imprimir(arrB);
    p_arrB = &arrB[0];
    
    temp = p_arrA;
    p_arrA = p_arrB;
    p_arrB = temp;

    printf("Nuevo Arreglo A: \n");
    imprimir(p_arrA);
    
    printf("Nuevo Arreglo B: \n");    
    imprimir(p_arrB);   
    
    printf("\n");

    return 0; 
}