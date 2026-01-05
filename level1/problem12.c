#include <stdio.h>

int readnum(int *n1, int *n2)
{
    printf("entre u n1 :");
    scanf("%d", n1);
     printf("entre u n2 :");
    scanf("%d", n2); 
}

int check_num(int n1, int n2)
{
    if(n1 > n2)
    {
        return n1;
    }else
    {
        return n2;
    }
}

int  print_result(int max)
{
    printf("the max : %d\n", max);
}

int main()
{
    int n1,n2;
    readnum(&n1, &n2);
    print_result(check_num(n1, n2));
    return 0;
}