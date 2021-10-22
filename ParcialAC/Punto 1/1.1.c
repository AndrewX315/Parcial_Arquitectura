
#include <stdio.h>

int main()
{
   int rad;
   float PI = 3.14, area, ci;

   printf("\n Digite el radio del circulo: ");
   scanf("%d", &rad);

   area = PI * rad * rad;
   printf("\n Area del circulo : %f ", area);

   ci = 2 * PI * rad;
   printf("\nCircunferencia : %f ", ci);

   return (0);
}