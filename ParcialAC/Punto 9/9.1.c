#include<stdio.h>

void ParImpar();

int main()
{
   ParImpar();
}

void ParImpar (){
int num;
    printf(" **\n");
    printf("  \n");
    printf("  PAR O IMPAR \n");
    printf("  \n");
    printf(" **\n");
    printf("\n --Digite un numero: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf(" --El numero es Par\n");
    }else{
        printf(" --El numero es Impar\n");
    }
}