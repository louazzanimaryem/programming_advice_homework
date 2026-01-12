#include <stdio.h>
//print all prime numbers 1 to N
void    read_input(int *n)
{
    printf("Please Entre a Positive Number\n ");
     scanf("%d", n);
}
int check_prime(int n)
{ 
    if (n <= 1)
    {
        return (0);
    }
       int i = 2;
       while (i <= n / i)
       {
        if(n % i == 0)
        {
            return (0);
        }
            i++;
      }
       return (1);
}
void     print_all_num_prime(int n)
{
    int i = 1;
    int j;
    while(i <= n)
    {
       j= check_prime(i);
        if (j == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }
}

int main()
{
    int n;
    read_input(&n);
        print_all_num_prime(n);
}