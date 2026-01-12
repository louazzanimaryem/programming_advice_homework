#include <stdio.h>
void    read_input(int *n, int *digit)
{
    printf("please entre positive number\n");
    scanf("%d", n);
    printf("please entre positive number 2\n");
    scanf("%d", digit);
}
int     digit_frequency(int n, int digit)
{
    int count = 0;
    int temp = 0;
    while(n > 0)
    {
        temp = n % 10;
        n = n / 10;
        if(temp == digit)
        {
            count++;
        }
    }
    return (count);
}
int main()
{
    int number, digit;
    read_input(&number, &digit);
    int res = digit_frequency(number, digit);
    printf("digit frequenci is %d\n", res);
}