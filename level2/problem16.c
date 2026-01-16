#include <stdio.h>
#include <unistd.h>

void    print_letter(void)
{
    char c = 'A';
    while (c <= 'Z')
    {
        char k = 'A';
        while (k <= 'Z')
        {
            char s = 'A';
            while (s <= 'Z')
            {
                   write(1, &c,1);
                   write(1, &k, 1);
                   write(1, &s, 1);
                    write(1, "\n", 1);
                s++;
            }
            k++;
        }
        c++;
    }
}
int main()
{
    print_letter();

}