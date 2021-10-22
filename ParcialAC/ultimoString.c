// Punto 8-02
// Find the last occurrence of a character in a given string.
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo

#include <stdio.h>
#include <string.h>
 
int main(){
    int encontrar=0, posicion=0, final;
    char cadena[]= "arquitectura_de_computadores"; 
    char caracter; 

    printf("\t\tPrograma que busca la ultima aparición de un carácter en una cadena determinada\n");

        printf("\n¿Que caracter quiere buscar?: ");
        caracter=getchar();
        
        for(int i=strlen(cadena)-1;i>=0;i--){
            posicion++;
            if(cadena[i]==caracter){
            encontrar = 1;
            break;
            }
        }

        if(encontrar){
            printf("El caracter %c aparece por ultima vez en la posicion ",caracter);
            final=(strlen(cadena)-posicion)+1;
            printf("%i \n",final);
        
        }else{
            printf("El caracter no esta en la cadena\n");
        }
            
        printf("\nLa cadena que ha escrito es: %s\n", cadena);
}

