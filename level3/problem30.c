#include <stdio.h>
int     count_char_str(char *str, char c)
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
int main()
{
    char str[] = "maryem 'Loi";
    char c = 'L';
    printf("letter %c count %d\n", c, count_char_str(str, c));

}
