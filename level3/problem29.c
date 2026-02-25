#include <stdio.h>

int   str_len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int     capital_letter(char *str)
{
    int i = 0;
    int count = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
              count++;
        }
        i++;
    }
    return (count);
}
int  small_letter(char *str)
{
    int i =0;
    int count = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
        }
        i++;
    }
    return (count);
}
int main()
{
    char str[] = "Maryem LOLI Kani nano";
    
    printf("String length : %d\n", str_len(str));
    printf("Capital letters count :%d\n", capital_letter(str));
    printf("small letters count :%d\n", small_letter(str));
    
}
