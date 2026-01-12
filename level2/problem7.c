#include <unistd.h>
#include <stdio.h>
void    read_input(int *n)
{
    printf("Please entre your number \n");
    scanf("%d", n);
}

int     reversed_num(int n)
{
    int temp = 0;
    int digit = 0;
     while (n > 0)
    {
        
        digit = n % 10;
        n = n / 10;
        temp = temp * 10 + digit;
    }
    return (temp);
}
int main()
{
    int n ;
     read_input(&n);
    int result = reversed_num(n);
     printf("%d\n", result);
    return 0;
}