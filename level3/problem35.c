#include <stdio.h>

void    print_each_word(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
         if(str[i] != ' ')
         {
             printf("%c", str[i]);
         }
         else if (str[i] == ' ' && str[i+1] != ' ' && i != 0)
         {
            printf("\n");
         }
         i++;
    }
     printf("\n");
}
int main()
{
    char str[] = "maryem  loli nano";
      printf("your string words are :\n");
    print_each_word(str);
}