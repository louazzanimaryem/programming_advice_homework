#include <stdio.h>

int    replace_match_case(char *str, char *old_word)
{
    int i, j;
    int match = 0;

    i = 0;
    j = 0;
      if(old_word[j] == 0)
         {
            return 0;
            
        }
    while(str[i]!= '\0')
    {
        j = 0;
        
    while(old_word[j] != '\0' && str[i+j] != '\0' && str[i+j] == old_word[j])
          j++;
        if(old_word[j] == '\0')
       {
            match  = 1;
        printf("sa ");
          i+=j;
       }
    else
       {
         
        printf("%c", str[i]);
        i++;
       }
       
    }
}
int main()
{
    char str[] = "New lilo love";
    char wor[] = "ne";
    replace_match_case(str, wor);
    printf("\n");
}