// Punto 10 - 3
// Add two numbers using pointers.
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>


int main(){
   int numero1, numero2, suma; 
   int *ptr1, *ptr2;

   printf("\t\tPrograma que suma dos numeros usando punteros\n");
   printf("\nIngrese el primer numero: ");
   scanf("%d", &numero1);

   printf("\nIngrese el segundo numero: ");
   scanf("%d", &numero2);

   ptr1 = &numero1;
   ptr2 = &numero2;

   suma = *ptr1 + *ptr2;

   printf("\nLa suma de los dos numero es: %d\n", suma);

   return 0;

}