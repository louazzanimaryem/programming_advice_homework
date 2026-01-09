#include <stdio.h>
void    print_letter(void)
{
   char  c = 'A';
    while(c <= 'Z')
    {
        printf("%c", c);
        c++;
    } 
}
int main()
{
    print_letter();
    return 0;
}