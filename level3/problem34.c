#include <stdio.h>

void    print_alL_vowels(char *str)
{
    char k[20];
    int j = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        
         if (str[i] == 'a' || str[i] == 'u' || str[i] == 'e' || str[i] == 'i' ||
             str[i] == 'o' || str[i] == 'A' || str[i] == 'U' || str[i] == 'I' || 
             str[i] == 'O' || str[i] == 'E')
         {
             k[j] = str[i];
             j++;
         }
         i++;
    }
    
    printf("vowels in string are :\n");
      int x = 0;
    while(x < j)
    {
        printf("%c ", k[x]);
         x++;
    }
    printf("\n");    
}
int main()
{
    char str[] = "maryem lOli ";
      print_alL_vowels(str);
}