#include <stdio.h>

int main()
{
  int count, n, t1 = 0, t2 = 1, Temp = 0;

  printf("Digite el numero de terminos que desea :\n");
  scanf("%d", &n);

  printf("\nLa serie fibonacci : %d , %d , ", t1, t2);
  count = 2;
  while (count < n)
  {
    Temp = t1 + t2;
    t1 = t2;
    t2 = Temp;
    ++count;
    printf("%d , ", Temp);
  }
  return 0;
}