
#include <stdio.h>

char     to_lower(char c)
{
    char cha1 = c + 32;

    return (cha1);
}
void       is_vowel(char c)
{
      if(c >= 'A' && c <= 'Z')
      {
          c = to_lower(c);
      }

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            printf("yes letter '%c' is vowel \n", c);
        }
}
int main()
{
    char  c = 'A';
    is_vowel(c);
}