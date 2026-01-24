#include <stdio.h>
#include <math.h>

void    read_input(float *n)
{
    printf("entre a number: \n");
    scanf("%f", n);
}

int  my_floot(float x)
{
    int int_part = (int)x;
    if((float)int_part == x)
       return x;
      if(x > 0)
      {
        return (float)int_part;
      }
      else
      {
        return (float)(int_part - 1);
      }
}
int main()
{
    float n;
    read_input(&n);
    printf("the floot %d\n", my_floot(n));
}