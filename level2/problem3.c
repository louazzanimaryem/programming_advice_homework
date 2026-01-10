#include <stdio.h>

void    read_input(int *n)
{
    printf("Please entre positive  Number\n");
    scanf("%d", n);
}
int   check_perfect_number(int n)
{
    int i = 1;
    int sum = 0;
    while (i < n)
    {
        if(n % i == 0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum == n)
    {
        return (1);//perfect
    }
    else
          return (0);//not  perfect
}
int main()
{
    int n;
    read_input(&n);
    int j = check_perfect_number(n);
    if(j == 1)
    {
        printf("is a perfect number\n");
    }
    else
    {
        printf("is not perfect\n");
    }
    return 0;
}