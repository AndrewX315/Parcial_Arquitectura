// Punto 8-02
// Find all occurrences of a character in a given string..
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo

#include <stdio.h>
#include <string.h>
 
int main(){
    int encontrar=0, posicion=0, k=0;
    char cadena[]= "arquitectura_de_computadores"; 
    char caracter; 

    printf("\t\tPrograma que busca la primera aparición de un carácter en una cadena determinad\n");

        printf("\n¿Que caracter quiere buscar?: ");
        caracter=getchar();
        
        for(int i=0;cadena[i];i++){
                            posicion++;
            if(cadena[i]==caracter){
                printf("El caracter %c aparece en la posicion ",caracter);

                printf("%i \n",posicion);
            }
        }

            
        printf("\nLa cadena que ha escrito es: %s\n", cadena);
       
}