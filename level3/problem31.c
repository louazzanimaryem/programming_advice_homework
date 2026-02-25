#include <stdio.h>

int     count_match_case(char *str, char c)
{
    int i = 0;
    int count = 0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
        {
            count++;
        }
       i++; 
    }
    return (count);
}
char    lower_case(char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return c+32;
    }
    return c;
}
int    count_letters(char *str, char c)
{
    int i =0;
    int count = 0;
     char lowerc_c = lower_case(c);
    while(str[i] != '\0')
    {
        if(lower_case(str[i]) == lowerc_c)
        {
            count++;
        }
         i++;
    }
    return (count);
}
int main()
{
    char str[] = "maMryem loli";
    char c = 'm';
    printf("letter %c count =  %d\n", c, count_match_case(str, c));
    printf("letter %c or %c  count = %d\n", c, (c >= 'a' ? c - 32: c+32), count_letters(str, c));
}  