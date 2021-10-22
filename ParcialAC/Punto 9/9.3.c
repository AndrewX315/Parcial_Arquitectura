#include <stdio.h>
 
long fibonacci( long n ); 
int main()
{
   long resultado; 
   long numero;    
 
   printf( "Introduzca un entero: " );
   scanf( "%ld", &numero);
   resultado = fibonacci( numero );
   printf( "Fibonacci( %ld ) = %ldn", numero, resultado );
   return 0; 
} 

long fibonacci( long n )
{

   if ( n == 0 || n == 1 ) {
      return n;
   } 
   else { 
      return fibonacci( n - 1 ) + fibonacci( n - 2 );
   } 
    
} 