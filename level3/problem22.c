#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int i = 1;
    while(i <= 10)
    {
        printf("%d ", fibonacci(i));
        i++;
    }
    printf("\n");
    return 0;
}