#include <stdio.h>

int main()
{

   int num, rem, rev = 0;

   printf("Digite cualquier numero para ser reversado :\n");
   scanf("%d", &num);

   while (num >= 1)
   {
      rem = num % 10;
      rev = rev * 10 + rem;
      num = num / 10;
   }

   printf("\n Numero al reves: %d", rev);
   return (0);
}
