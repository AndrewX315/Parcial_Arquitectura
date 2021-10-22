// Punto 12 - 1
// Bubble Sort in C
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>


int main(){
  int arr[5], temp, cont=0;

  printf("\t\tPrograma Bubble Sort\n");

  for (int i=0; i<5; i++){ 
    cont++;  
    printf("\nIngrese el elemento (%d): ", cont); 
    scanf("%d", &arr[i]);
  }
  
  for (int i=0; i<5-1; i++){
    for (int j=0; j<5-i-1; j++){
      if (arr[j] > arr[j+1]) {
        temp     = arr[j];
        arr[j]   = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  printf("\n Lista ordena de forma ascendente: \n");

  for (int i=0; i<5; i++){
      printf("%d\n", arr[i]);
  }
     

  return 0;
}