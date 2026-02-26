#include <stdio.h>
#include <stdlib.h>

int     str_len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    } 
    return (i);
}
void   *reverse_word(char *str)
{
    int size = str_len(str);
    int i = size - 1;
    while(i >= 0)
    {
        while(i >= 0 && str[i] == ' ')
         i--;
    int end = i;
        while(i >= 0 && str[i] != ' ')
        i--;
    int start = i + 1;
    int k = start;
       while(k <= end)
       {
         printf("%c", str[k]);
         k++;
       }
       if(i >= 0)
        printf(" ");
   
    }
}

int main()
{
    char strs[] = "le temps du mepris precede celui de l'indifference";
     reverse_word(strs);
     printf("\n");
}