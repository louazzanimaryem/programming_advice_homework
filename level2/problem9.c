#include <stdio.h>
int  read_input(int *n)
{
    do{

        printf("please entre a possitive number\n");
         scanf("%d", n);
    } while (*n <= 0);
    return (*n);
}
int     digit_frequency(int n, int digit)
{
   int temp = 0;
        int count =0;
    while(n > 0)
    {
          temp = n % 10;
          n = n / 10 ;
            if(temp == digit)
         {
            count++;
         }
        
    }
     return count;
}
void    print_digits(int number)
{
    int i = 0;
     int digit = 0;
    while(i < 10)
    {
       
        digit = digit_frequency(number, i);
        if(digit > 0)
        {
            printf("digit %d ", i);
            printf("frequency is %d ", digit);
           printf("time(s).\n");
        }
        i++;
    }
}
int main()
{
    int n;
    read_input(&n);
     print_digits(n);
    return 0;
}