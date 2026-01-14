#include <stdio.h>
void    read_input(int  *n)
{
    printf("entre a positive number\n");
     scanf("%d", n);
}
void    print_num(int n)
{
    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while ( j <= i)
        {
            printf("%d", i);
             j++;
        }
        printf("\n");
        i--;
    }
}
int main()
{
    int n;
    read_input(&n);
       print_num(n);
}