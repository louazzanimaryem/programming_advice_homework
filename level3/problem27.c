#include <stdio.h>

void    invert_character(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]-=32;
            printf("%c", str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]+=32;
            printf("%c", str[i]);
        }
        i++;
    }
}

int main()
{
    char str[20];
    printf("please entre a character ?\n");
    scanf("%c", str);
    printf("char after inverting case :\n");
    invert_character(str);
    printf("\n");
}