#include <stdio.h>

void    invert_letter_str(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
         if(str[i] >= 'a' && str[i] <= 'z')
         {
            printf("%c", str[i] - 32);
         }
         else if (str[i] >= 'A' && str[i] <= 'Z')
         {
            printf("%c", str[i] + 32);
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
     char str[] = "mary-loU NANO";
    printf("string after inverting all letters case :\n");
      invert_letter_str(str);
    printf("\n");
}