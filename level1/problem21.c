#include <stdio.h>

void    read_input(float  *l)
{
    printf("Please enter Circumference? \n");
    scanf("%f", l);
}
float   CircleAreaByCircumference(float l)
{
    const float pi = 3.14;
    return ((l*l) / (pi * 4));
}
void    print_result(float area)
{
    printf("Circle Area = %.2f", area);
}
int main()
{
    float l;
    read_input(&l);
    print_result(CircleAreaByCircumference(l));
}