#include <stdio.h>

void    read_input(int *n)
{
    printf("entre you number :\n");
    scanf("%d", n);
}
int     sum_even(int n)
{
    int count = 1;
    int sum = 0;
    while (count < n)
    {
        if(count % 2 == 0)
        {
            sum += count;
        }
        count++;
    }
    return sum;
}
int main()
{
    int n;
    read_input(&n);
    printf("the sum is :%d\n", sum_even(n));
    return 0;
}