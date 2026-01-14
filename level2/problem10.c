#include <stdio.h>

void    read_input(int *n)
{
    printf("Please Entre a positive number\n");
    scanf("%d", n);
}
int     reves(int n)
{
    int temp = 0;
      int numb2 = 0;
    while (n > 0)
    {
        temp = n % 10;
          n = n / 10;
        numb2 = numb2 * 10 + temp;
    }
    return (numb2);
}
void  print_number(int n)
{
    int temp = 0;
    while (n > 0)
    {
        temp = n % 10;
           n = n / 10;
           printf("%d\n", temp);
    }
   //  return temp;
}
int main()
{
    int n;
    read_input(&n);
       print_number(reves(n));
}