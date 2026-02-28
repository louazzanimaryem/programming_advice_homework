#include <stdio.h>

void    remove_punctuation(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >='A' && str[i] <= 'Z') || 
        (str[i] >= '0' && str[i] <= '9') || str[i] == ' ')
        {
            printf("%c", str[i]);
            i++;
        }
         else
            i++;
    } 
}
int main()
{
    char str[] = "mar, lou nano vim:  joj; loiu!";
      remove_punctuation(str);
    printf("\n");
}