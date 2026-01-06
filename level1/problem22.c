#include <stdio.h>

void    read_input(float  *a, float  *b)
{
    printf("Please enter triangle side A ?\n");
     scanf("%f", a);
     printf("Please enter triangle side B ?");
     scanf("%f", b);
}
float   CircleAreaByITriangle(float a, float b)
{
    const float pi = 3.14;
    float area;
    area = pi * (((b*b) / 4) * (2 * a - b) / (2 * a + b));
    return area;
}
void    print_result(float area)
{
    printf("Circle Area = %.2f", area);
}
int main()
{
    float a, b;
    read_input(&a, &b);
    print_result(CircleAreaByITriangle(a, b));
}