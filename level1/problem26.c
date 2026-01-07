#include <stdio.h>
void    read_num(int *n)
{
    printf("entre your num :\n");
    scanf("%d", n);
}
void    print_num(int n)
{
    
    int count = 0;

    while (count < n)
    {
        printf("%d", count);
        count++;  
    }
    printf("\n");
}

int main()
{
    int n;
    read_num(&n);
    print_num(n);
}