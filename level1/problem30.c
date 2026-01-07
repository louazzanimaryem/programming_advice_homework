#include <stdio.h>

void    read_input(int *n)
{
    printf("please entre a positive number :\n");
      scanf("%d", n);
}
int     factorial_num(int n)
{
    int count = n;
    int factorial = 1;
    if(n < 0)
    {
     return -1;
    }
    
    while(count >= 1)
    {
        factorial = factorial * count;
     count--;
    }
    return factorial;
}
int main()
{
    int n;
    read_input(&n);
    int result = factorial_num(n);
    if(result == -1)
    {
        printf("Error: factorial of negative number not defined.\n");
    }
    printf("the factor :%d\n",result);
    return 0;
}