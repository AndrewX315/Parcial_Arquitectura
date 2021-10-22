// Punto 01 - 2
// Programa para saber que numero es mayor entre tres numeros
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>

int main(){
    int numero1, numero2, numero3;

    printf("\t\t\t Programa para saber el mayor entre tres numeros");
    printf("\n\nPor favor ingrese el primer numero: ");
    scanf("%i", &numero1);
    
    printf("\n\nPor favor ingrese el segundo numero: ");
    scanf("%i", &numero2);

    printf("\n\nPor favor ingrese el tercer numero: ");
    scanf("%i", &numero3);


    if(numero1>numero2 && numero1>numero3){
    
        printf("\nEl numero %i es mayor a %i y %i\n", numero1, numero2, numero3);
    
    }else if(numero2>numero1 && numero2>numero3){

        printf("\nEl numero %i es mayor a %i y %i\n", numero2, numero1, numero3);
    
    }else if(numero3>numero1 && numero3>numero2){

        printf("\nEl numero %i es mayor a %i y %i\n", numero3, numero1, numero2);
    
    }
}