#include <stdio.h>
//palindrome number
void    read_input(int *n)
{
    printf("Please entre a positive nummber 1 \n");
    scanf("%d", n);
}

int     reverse_number(int n)
{
    int temp = 0;
    int result = 0;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        result = result * 10 + temp;
    }
    return result;
}
int    check_palindrom(int n)
{
    int nb = reverse_number(n);
    if(n == nb)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
int main()
{
    int n;
    read_input(&n);
    int k = check_palindrom(n);
    if(k == 1)
    {
        printf("its palindrom\n");
    }
    else{
        printf("its not palindrom\n");
    }
    return 0;
}
