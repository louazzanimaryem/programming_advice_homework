#include <stdio.h>
#include <math.h>
void    read_input(float *a, float  *b, float *c)
{
    printf("Please enter triangle side A ?\n");
    scanf("%f", a);
     printf("Please enter triangle base B ?\n");
      scanf("%f", b);
      printf("Please enter triangle side C ?");
       scanf("%f", c);
}
float   Circle_Area_By_ATriangle(float a, float b, float c)
{
    const float pi = 3.14;
    float P = (a + b + c) / 2;
    float t =  sqrt(P * (P - a) * (P - b) * (P - c));
    float r = t / P;
    float area = pi * r *r;
    return area;
}
void    print_result(float area)
{
    printf("Circle Area =%.2f\n", area);
}
int main()
{
    float a, b, c;
    read_input(&a, &b, &c);
    print_result(Circle_Area_By_ATriangle(a, b, c));
}