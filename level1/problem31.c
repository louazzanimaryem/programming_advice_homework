#include <stdio.h>
void    read_input(int *n)
{
    printf("entre your num :\n");
    scanf("%d", n);
   
}
void     pow_num(int n)
{
    int a, b, c;
    a = n*n;
    b = n*n*n;
    c = n*n*n*n;
   printf("the power of 2 :%d\n the power of 3 :%d\n the power of 4 :%d\n", a, b, c);
}
int main()
{
    int n;
    read_input(&n);
    pow_num(n);
}
