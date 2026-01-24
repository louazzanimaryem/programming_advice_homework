#include <stdio.h>
#include <math.h>

float get_fraction_part(float num)
{
    return num - (int)num;
}
void    read_input(float *n)
{
    printf("entre a float number:\n");
    scanf("%f", n);
}
int my_round(float num)
{
    int integer_part = (int)num;
    float decimal_part = get_fraction_part(num);
    if (fabs(decimal_part) >= 0.5f)
    {
      if(num > 0)
      {
        return integer_part + 1;
      }
       else
       {
        return integer_part - 1;
       }
    }
 return integer_part;
}
int main()
{
    float n;
    read_input(&n);
    printf("my round :%d\n", my_round(n));
    //printf("round : %d\n", (int)round(n));
}