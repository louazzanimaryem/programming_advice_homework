#include <stdio.h>
#include <unistd.h> 
void    read_input(int *n)
{
    printf("Please Entre a Positive Number\n");
    scanf("%d", n);
}

int   sum_digit(int n)
{
    int sum = 0;
    while(n > 0)
     {
            sum += n % 10;
             n /= 10;
     }
       return (sum);
}
int main()
{
    int n;
    read_input(&n);
  int result =  sum_digit(n);
  printf("the sum is :%d\n", result);
}