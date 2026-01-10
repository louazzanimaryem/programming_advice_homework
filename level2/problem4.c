#include <stdio.h>
#include <unistd.h>
//perfect number from 1 to N
void    read_input(int *n)
{
    printf("Please Entre a positive number\n");
    scanf("%d", n);
}
void    putnbr(int nb)
{
    if(nb >= 10)
    {
        putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1, &c, 1);
    //write(1, "\n", 1);
    
}
int    perfect_number(int n)
{
    int i = 1;
    int sum = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
            sum += i;

        }
        i++;
    }
    return (sum == n);
}
void    print_perfect_num(int n)
{
    int i = 1;
    while (i <= n)
    {
        if(perfect_number(i))
        {
            putnbr(i);
             write(1, "\n", 1);
        }
        i++;
    }
}
int main()
{
    int n;
    
    read_input(&n);
    print_perfect_num(n);
  return 0;
}
