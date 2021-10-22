#include <stdio.h>

int main()
{
    int sub,marks,n,i,sum=0,tmp=0,arr[10],Percentage;
    printf("\n Digite el numero de asignaturas : \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    Percentage = (sum * 100) / tmp;

    printf("\n Promedio del estudiante : %d\n", Percentage);
}