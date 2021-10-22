#include<stdio.h>
#include<string.h>
int main()
{

    char str[50],*revStr;
 
    printf("\nDigite un string sin espacios:\n\n ");
    scanf("%s",str);

    revStr = strrev(str);
    printf("\nla reversa del string es:\n\n %s",revStr);
    return 0;
}