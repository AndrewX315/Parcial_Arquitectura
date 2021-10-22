// Punto 04 - 1
// Programa de una calculadora sencilla
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.


#include <stdio.h>

int main(){
    float numero1, numero2, suma, resta, multiplicacion, division;
    int opc, confirmar;

    do{
        printf("\tPrograma de Calculadora\n");
        
        printf("\n 1. Suma");
        printf("\n 2. Resta");
        printf("\n 3. Multiplicacion");
        printf("\n 4. Division\n");
        printf("      Seleccione una opcion: ");      
        scanf("%i", &opc);

        switch(opc){
            case 1:
                printf("\n \t\t SUMA\n");
                printf("\n Ingrese el primer numero: ");
                scanf("%f", &numero1);

                printf("\n Ingrese el segundo numero: ");
                scanf("%f", &numero2);

                suma = numero1 + numero2;

                printf("\n La suma de %f y %f es:    %f", numero1, numero2, suma);
                break;
            
            case 2:
                printf("\n \t\t RESTA\n");
                printf("\n Ingrese el primer numero: ");
                scanf("%f", &numero1);

                printf("\n Ingrese el segundo numero: ");
                scanf("%f", &numero2);

                resta = numero1 - numero2;

                printf("\n La resta de %f y %f es:    %f", numero1, numero2, resta);
                break;

            case 3:
                printf("\n \t\t MULTIPLICACION\n");
                printf("\n Ingrese el primer numero: ");
                scanf("%f", &numero1);

                printf("\n Ingrese el segundo numero: ");
                scanf("%f", &numero2);

                multiplicacion = numero1 * numero2;

                printf("\n La multiplicacion de %f y %f es:    %f", numero1, numero2, multiplicacion);
                break;  

            case 4:
                printf("\n \t\t DIVISION\n");
                printf("\n Ingrese el primer numero: ");
                scanf("%f", &numero1);

                printf("\n Ingrese el segundo numero: ");
                scanf("%f", &numero2);

                division = numero1 / numero2;

                printf("\n La division de %f y %f es:    %f", numero1, numero2, division);
                break;    
        }
        printf("\n¿Desea realizar otra operacion? Si (1) No(0)\n");
        scanf("%i", &confirmar);

    }while(confirmar==1);

}