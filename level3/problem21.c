//fibonacci series
#include <stdio.h>
void    fib(int n)
{
   int feb_n = 0;
    int feb2 = 0, feb1 = 1;
    printf("%d ", 1);
    int i = 2;
    while(i <= n)
    {
        feb_n = feb1 + feb2;
         printf("%d ", feb_n);
         feb2 = feb1;
         feb1 = feb_n;
i++;
    }
}
int main()
{
    fib(10);

}
