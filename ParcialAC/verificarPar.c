// Punto 04 - 3
// Programa para saber si un numero es positivo, negativo o cero
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>

int main(){
    float numero1;
    int opc, confirmar;

    do{
    printf("\t\tPrograma para saber si un numero es positivo, negativo o cero con Switch\n");
    printf("\nIngrese un numero: ");
    scanf("%f", &numero1);

    switch (numero1 < 0)
    {
        case 1:
            printf("\nEl numero %f es negativo", numero1);
        break;

        case 0:
            switch (numero1 > 0)
            {
                case 1: 
                    printf("\nEl numero %f es positivo", numero1);
                    break;
                case 0:
                    printf("\nEl numero es cero");
                    break;
            }
        break;
    }

        printf("\n¿Desea realizar otra operacion? Si (1) No(0)\n");
        scanf("%i", &confirmar);

    }while(confirmar==1);

}