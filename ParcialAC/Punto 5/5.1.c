#include <stdio.h>

int main()
{

  int i, arr[50], pos, len;
  int newitem;

  printf("Digite el numero de elementos que quiere en su arreglo :\n");
  scanf("%d", &len);

  printf("Digite %d elementos para el arreglo:\n", len);
  for (i = 0; i < len; i++)
    scanf("%d", &arr[i]);

  printf("Digite el elemento que quiere introducir al arreglo\n");
  scanf("%d", &newitem);
  printf("digite la posicion del nuevo elemento:\n");
  scanf("%d", &pos);

  len++;
  pos--;
  i = len - 1;

  while (i >= pos)
  {
    arr[i] = arr[i - 1];
    i--;
  }
  arr[pos] = newitem;
  printf("Arreglo despues de insertar el nuevo elemento\n");

  for (i = 0; i < len; i++)
    printf(" %d", arr[i]);

  return 0;
}