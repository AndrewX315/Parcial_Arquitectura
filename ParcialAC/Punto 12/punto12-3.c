// Punto 12 - 3
//Selection Sort in C
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.


#include <stdio.h>
int main(){
    int arr[6], puesto, cont=0, temp;
    
    for (int i=0; i<6; i++){
        cont++;  
        printf("\nIngrese el elemento (%d): ", cont); 
        scanf("%d", &arr[i]);
    }

    
    for(int i=0; i<6-1; i++){
        puesto=i;
        for(int j=i+1; j<6; j++){
            if(arr[puesto] > arr[j]){
                puesto=j;
            }   
        }
        
        if(puesto != i){
            temp    = arr[i];
            arr[i]  = arr[puesto];
            arr[puesto] = temp;
        }
    }

    printf("\nArray ordenado: \n");
    for(int i = 0; i < 6; i++){
        printf("%d \n", arr[i]);
    }
    
    return 0;
}