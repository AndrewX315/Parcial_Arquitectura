// Punto 04 - 1
// Programa de conversión de temperatura Celsius a Fahrenheit y viceversa
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>

int main(){
    float temperatura, fahrenheit, celsius;
    int opc, confirmar;

    do{
        printf("\tPrograma de conversión de temperatura Celsius a Fahrenheit y viceversa\n");
        
        printf("\n 1. Convertir de Celsius a Fahrenheit.");
        printf("\n 2. Convertir de Fahrenheit a Celsius.\n");
        printf("      Seleccione una opcion: ");      
        scanf("%i", &opc);

        switch(opc){
            case 1:
                printf("\n \t\t Convertir de Celsius a Fahrenheit.\n");
                printf("\n Ingrese la temperatura en Celsius: ");
                scanf("%f", &temperatura);

                fahrenheit = (1.8 * temperatura) + 32;

                printf("\nLa temperatura en Fahrenheit es: %f \n", fahrenheit);
                break;
            
            case 2:
                printf("\n\t\t Convertir de Fahrenheit a Celsius \n");
                printf("\nIngrese la temperatura en Fahrenheit: ");
                scanf("%f", &temperatura);
                
                celsius = (temperatura-32) / 1.8;

                printf("\n La temperatura en Celsius es: %f \n", celsius);

                break;
        }
        printf("\n¿Desea registrar otra temperatura? Si (1) No(0)\n");
        scanf("%i", &confirmar);

    }while(confirmar==1);

}