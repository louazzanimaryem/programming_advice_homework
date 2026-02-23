#include <stdio.h>

void    upper_case(char *str)
{
    int i = 0;
    while(str[i]!= '\0')
    {
        if(str[i] != ' ' && str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] -32);
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
}
void   lower_case(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] +32);
        }
         else
        {
            printf("%c", str[i]);
        }
        i++;
    }
}
int main()
{
     char str[] = "C programminG";
     
     printf("String after Upper :\n");
     upper_case(str);
         printf("\n");
     printf("String after lower :\n");
     lower_case(str);
     printf("\n");
}