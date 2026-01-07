#include <stdio.h>
void    read_num(int *n)
{
    printf("entre your number\n");
    scanf("%d", n);

}
int     sum_odd_number(int n)
{
    int sum = 0;
     int count = 1;
    while(count < n)
    {
        if(count % 2 != 0)
        {
            sum+=count;
        }
        count++;
    }
     return sum;
}
int main()
{
    int n;
    read_num(&n);
   printf("the sum is :%d\n", sum_odd_number(n));
}