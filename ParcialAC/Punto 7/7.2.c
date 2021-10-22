#include<stdio.h>
#include<string.h>

void main()
{
    while(1)
    {
    char str[20];
    int i;

    printf("\n\nDigite el String: ");
    scanf("%s",str);

    for (i=0;i<=strlen(str);i++)
  {
        if (str[i]>=65&&str[i]<=90)
        {
         str[i] = str[i] + 32;
  }    

        else if (str[i] >= 97 && str[i] <= 122)
        {
         str[i] = str[i] - 32;
  }    
    }
    printf("\n\nConvertir String(Minuculas/Mayusculas) Is: %s\n\n",str);
 }

    return 0;
}