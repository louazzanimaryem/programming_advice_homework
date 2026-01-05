#include <stdio.h>
#include <math.h>

void    readnum(float *a,float *b)
{
    printf("Please enter rectangle width A:");
    scanf("%f", a);
     printf("Please enter rectangle length B:");
    scanf("%f", b);
}

float   calc_area(float a,float b)
{
     if((b*b) < (a*a))
    {
        return 0;
    }
    float area = a * sqrt((b * b) - (a * a));
   
    return area;
}
void  print_result(float area)
{
    printf("the result is %f\n", area);
}
int main()
{
    float a,b;
    readnum(&a, &b);
    print_result(calc_area(a, b));
    return 0;
}
