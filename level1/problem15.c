#include <stdio.h>
void readnum(float *a, float *b)
{
    printf("Please enter rectangle width A:");
    scanf("%f", a);
     printf("Please enter rectangle length B:");
    scanf("%f", b);
}
float  calc_area(float a, float b)
{
   return (a * b);
}
void    print_result(float  area)
{
       printf("Rectangle Area = %.2f\n", area);
}
int main()
{
    float a, b;
    readnum(&a, &b);
    print_result(calc_area(a, b));
    return 0;
}