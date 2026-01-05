#include <stdio.h>
#include <math.h>
void    read_input(float *a, float *h)
{
    printf("Please enter triangle base A ? \n");
    scanf("%f", a);
    printf("Please enter triangle height H ? \n");
    scanf("%f", h);
}
float     calc_triangle_area(float a, float h)
{
    float area;
    area =(a * h) / 2;
   return area;
}
void    print_result(float area)
{
    printf("Triangle Area = %.2f\n", area);
}
int main()
{
    float a, h;
    read_input(&a, &h);
    print_result(calc_triangle_area(a, h));
    return 0;
}
