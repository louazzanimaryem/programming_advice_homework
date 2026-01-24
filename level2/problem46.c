#include <stdio.h>
#include <stdlib.h>
void    read_num(float *n)
{
      printf("please entre a number :\n");
      scanf("%f", n);
}
float my_abs(float num)
{
    if(num > 0)
    {
        return num ;
    }
    return num * -1;
}
int main ()
{
    float n;
    read_num(&n);
    printf("\n");
   int res= my_abs(n);
     printf("abs result : %d\n", res);
}