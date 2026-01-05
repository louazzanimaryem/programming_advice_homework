#include <stdio.h>
void readnum(int *n1, int *n2, int *n3)
{
    printf("entre your num1 :");
    scanf("%d", n1);
    printf("entre your num2 :");
    scanf("%d", n2);
    printf("entre your num3 :");
    scanf("%d", n3);
}
int   check_max(int n1, int n2, int n3)
{
    if(n1 > n2 && n1 > n3)
    {
        return n1;
    }
    else if(n2 > n3)
    {
        return n2;
    }
    else {
        return n3;
    }
}
void    print_max(int max)
{
    printf("the max is : %d\n", max);
}
int main()
{
    int n1, n2, n3;
    readnum(&n1, &n2, &n3);
    print_max(check_max(n1, n2, n3));
    return 0;
}