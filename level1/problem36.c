#include <stdio.h>
void    read_input(int *n1, int *n2)
{
      printf("entre your n1 :\n");
    scanf("%d", n1);
      printf("entre your n2 :\n");
    scanf("%d", n2);
}
int     check_operation_type(int n1 , int n2, char op)
{
    
    if(op == '+')
    {
        return n1 + n2;
    }
    else if(op == '-')
    {
        return n1 - n2;
    }
    else if(op == '*')
    {
        return n1 * n2;
    }
    else if(op == '/')
    {
        if(n2 == 0)
        {
            printf("error\n");
            return -1;
        }
         return n1 / n2;
    }
    else {
        return -1;
    }
}
int main()
{
    int n1, n2;
    char op;
    read_input(&n1, &n2);
     printf("entre your type operation :");
      scanf(" %c", &op);
    
    printf("the opertion is :%d\n", check_operation_type(n1, n2, op));
    return 0;

}
