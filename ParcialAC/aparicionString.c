// Punto 8-01
// Find the first occurrence of a character in a given string.
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo

#include <stdio.h>
#include <string.h>
 
int main(){
    int encontrar=0,k=0;
    char cadena[]= "arquitectura_de_computadores"; 
    char caracter; 

    printf("\t\tPrograma que busca la primera aparición de un carácter en una cadena determinada\n");

        printf("\n¿Que caracter quiere buscar?");
        caracter=getchar();
        
        for(int i=0;cadena[i];i++){
            k++;
            if(cadena[i]==caracter){
            encontrar = 1;
            break;
            }
        }

        if(encontrar==1){
            printf("El caracter %c aparece por primera vez en la posicion ",caracter);
            printf("%i \n",k);
        
        }else{
            printf("El caracter no esta en la cadena\n");
        }
            
        printf("\nLa cadena que ha escrito es: %s\n", cadena);
       
}