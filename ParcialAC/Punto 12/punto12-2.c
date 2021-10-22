// Punto 12 - 2
// Shell Sort in C
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>

int main(){
    int arr[30], cont=0, temp;

    printf("\t\tPrograma Shell Sort\n");

    for(int i=0; i<6; i++){
        cont++;  
        printf("\nIngrese el elemento (%d): ", cont); 
        scanf("%d", &arr[i]);
    }

    for (int i=6/2; i>0; i=i/2){
        for (int j=i; j<6; j++){
            for(int k=j-i; k>=0; k=k-i){
                if (arr[k+i]>=arr[k]){
                    break;
                }else{
                    temp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = temp;
                }
            }
        }
    }

    printf("\nEl arreglo ordenado es: ");

    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}