#include <stdio.h>
void    read_input(int *n)
{
   printf("Enter number (-99 to stop):\n");
    scanf("%d", n);
}
int   sum_until_num(int n)
{
    int sum =0;
   // int count = 1;
    while(n != -99)
    {
        sum+=n;
          read_input(&n);
    }
    return sum;
}
int main()
{
    int n;
    read_input(&n);
    printf("the result = %d\n", sum_until_num(n));
    return 0;
}