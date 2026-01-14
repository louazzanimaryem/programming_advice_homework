#include <stdio.h>
void    read_input(int *n)
{
    printf("entre a positive number\n");
    scanf("%d", n);
}
void    print_letter(int n)
{
    int i = 65;
    while (i <= 65 + n -1)
    {
        int j = 1;
        while (j <= i - 65 + 1)
        {
            printf("%c", i);
            j++;
        }
            printf("\n");
        i++;
        
    }
}
int main()
{
    int n;
    read_input(&n);
    print_letter(n);
}