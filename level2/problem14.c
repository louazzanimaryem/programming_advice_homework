#include <stdio.h>
void    read_inpute(int *n)
{
    printf("entre a positive number\n");
    scanf("%d", n);
}
void    print_letter_pattern(int n)
{
    int i = 65 + n - 1;
    while (i >= 65)
    {
       int  j = 1;
        while (j <= n - (65 + n -1 -i))
        {
           
           printf("%c", i);
          j++;
        }
           printf("\n");
        i--;
    }
}
int main()
{
    int n;
    read_inpute(&n);
    print_letter_pattern(n);
}