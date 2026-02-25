#include <stdio.h>

char    to_lower(char c)
{
     if(c >= 'A' && c <= 'Z')
     {
        c+=32;
     }
     return (c);
}
int     count_vowel(char *str)
{
    int i =0;
    int count = 0;
    
     while(str[i] != '\0')
     {
          if(str[i] >= 'A' && str[i] <= 'Z')
       {
        str[i] = to_lower(str[i]);
       }
         if(str[i] == 'a' || str[i] == 'u' || str[i] == 'o' || str[i] == 'e' || str[i] == 'i')
        {
            count++;
        }
        i++;
     }
     return count;
}
int main()
{
    char str[] = "Maryem ";
    printf("number of vowels is : %d\n", count_vowel(str));
}