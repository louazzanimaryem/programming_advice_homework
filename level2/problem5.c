#include <stdio.h>
#include <unistd.h>
//reversed order
void    read_input(int *n)
{
    printf("Please entre a positive number\n");
    scanf("%d", n);
}
void    putnb(int n)
{
    if(n >= 10)
    {
        putnb(n / 10);
    }
    char c = n % 10 + '0';
    write(1, &c, 1);
    write(1, "\n", 1);
}
void    reversed_num(int n)
{
    int temp =0;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        putnb(temp);
    }
}
int main()
{
    int n;

    read_input(&n);
      reversed_num(n);
    return 0;
}
