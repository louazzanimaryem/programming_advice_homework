#include <stdio.h>

void    read_num(int *n)
{
    printf("entre you num :\n");
   
    scanf("%d", n);
}
void    printg_num(int n)
{
    int count = n;
    while (count >= 1)
    {
        printf("%d", count);
       
        count--;
    }
    printf("\n");
}
int main()
{
    int n;
    read_num(&n);
    print_num(n);
    return 0;
}