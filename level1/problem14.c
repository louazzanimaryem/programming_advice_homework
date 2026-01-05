#include <stdio.h>
void    readnum(int *n1, int *n2)
{
    printf("entre Num 1 :\n");
    scanf("%d", n1);
    printf("entre Num 2 :\n");
    scanf("%d", n2);
}
void  ft_swap(int *n1,int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
   *n2 = temp;
}
void  print_swap(int n, int z)
{
    printf("the num1 after swap : %d\n", n);
     printf("the num2 after swap : %d\n", z);
}
int main()
{
    int n1, n2;
    readnum(&n1, &n2);
    print_swap (n1, n2);
    ft_swap(&n1, &n2);
    print_swap(n1, n2);
}