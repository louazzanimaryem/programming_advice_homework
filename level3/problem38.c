#include <stdio.h>

int     str_len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
void    trim_left(char *str)
{
    int i = 0;
   char string[300];
     int j = 0;

        while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        {
           i++;
        }
        while(str[i] != '\0')
        {
          string[j] = str[i];
           j++;
           i++;
        }
      string[i] = '\0';
    printf("%s", string);
}
void    trim_right(char *str)
{
    int len = str_len(str);
    int i = len - 1;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i--;
    }
       str[i + 1] = '\0';
       printf("%s", str);
}
void    trim(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
     while(str[i] != '\0')
     {
        str[j++] = str[i++];
        str[j] = '\0';
     }
     int len = j - 1;
     while(len >= 0 && (str[len] == ' ' || (str[len] >= 9 && str[len] <= 13)))
     len--;

    str[len + 1] = '\0';
}
int main()
{
    char str[] = "      maryem louz  ";//maryem louz $
    printf("trim left :\n");
    trim_left(str);
    printf("\n");
    printf("trim right \n");
    char str2[] = "   maryem lou            ";//   maryem lou$
    trim_right(str2);
    printf("\n");
    char str3[] = "  loli  "; 
    trim(str3);
    printf("%s", str3);
    printf("\n");
}