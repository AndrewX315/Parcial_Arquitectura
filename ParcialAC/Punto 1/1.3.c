#include <stdio.h>

int main()
{

    unsigned long long int fact = 1;
    int i, num;

    printf("Digite el numero del que quiere factorial Factorial  :");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("\nFactorial es = %llu\n", fact);
    return 0;
}