#include <stdio.h>

int     count_word(char *str)
{
    int i = 0;
    int count = 0;
    while(str[i] != '\0')
    {
        if (i == 0 && str[i] != ' ')
        {
            count++;
        }
        else if(str[i] != ' ' && str[i - 1] == ' ' )
        {
            count++;
        }
        i++;
    }
    return (count);
}
int main()
{
    char str[] = "maryem loli koki";
    printf("the count word is : %d \n", count_word(str));
}