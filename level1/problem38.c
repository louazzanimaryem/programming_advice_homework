#include <stdio.h>
void   read_input(int *n)
{
    printf("entre your number :\n");
    scanf("%d", n);
}
int     check_is_prime(int n)
{
    if(n <= 1)
    {
        return (0); //false
    }
    int i = 2;
    while(i <= n / i)
    {
        if(n % i == 0)
        {
            return (0);//false
        }
  i++;
    }
return (1);//true
}
int main()
{
    int n;
    read_input(&n);
    printf("the result is :%d\n", check_is_prime(n));
    return 0;
}