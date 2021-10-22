// Punto 01 - 1
// Programa para dsaber si un numero es par o impar
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>

int main(){
    int numero;

    printf("\t\t\t Programa de Pares e Impares");
    printf("\n\nPor favor ingrese un numero: ");
    scanf("%i", &numero);

    if(numero%2 == 0){
        printf("EL numero es par.\n");
    }else{
        printf("El numero es impar.\n");
    } 

}

