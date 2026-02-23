#include <stdio.h>

void    conver_upper_case(char  *str)
{
   int i = 0;
   while(str[i] != '\0')
   {
    if(i == 0)
    {
        str[i]-=32;
        printf("%c", str[i]);
    }
    else
    {
     printf("%c", str[i]);
    }
    while(str[i] == ' ')
    {
        str[i+1]-=32;
        printf("%c", str[i+1]);
        i++;
    }
    i++;
   }
     
}
int main()
{
    char str[] = "maryem lilo koni vori";
    conver_upper_case(str);
    
}
