#include <stdio.h>

int     str_len(char *str)
{
    int i =0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
void    replace_word(char *str, char *wor)
{
    int size = str_len(str);
        int i = 0;
       int j = 0;   
        while(str[i] != '\0')
        { 
             j =0;
           while(wor[j] != '\0' && str[i + j] == wor[j])
               j++;
            if(wor[j] == '\0')
            {
                printf("usa ");
                i +=j;
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
    char str[] = "new lilo love";
    char wor[] ="new";
    replace_word(str, wor);
    printf("\n");
}

