// Punto 02 - 2
// //Programa para saber si un numero es positivo, negativo o cero
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>

int main(){
    int numero1;

    printf("\t\tPrograma para saber si un numero es positivo, negativo o cero");
    
    printf("\n\nPor favor ingrese un numero: ");
    scanf("%i", &numero1);
    

    if(numero1>0 && numero1!=0){
    
        printf("\nEl numero %i es positivo y difirente a cero (0)\n", numero1);
    
    }else if(numero1<0 && numero1!=0){

        printf("\nEl numero %i es negativo y diferente a cero (0)\n", numero1);
    
    }else if(numero1 == 0){

        printf("\nEl numero %i es cero\n",numero1);
    
    }
}
