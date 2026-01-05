#include <stdio.h>

void    read_input(float *D)
{
    printf("Please enter diameter D ?\n");
      scanf("%f", D);
}
float   calc_circle_area_from_diameter(float D)
{
   const float  pi = 3.14;
    float area = pi * ((D * D)/4);
    return area;
}
void    print_result(float area)
{
    printf("Circle Area = %.2f\n", area);
}
int main()
{
    float D;
   read_input(&D);
    print_result(calc_circle_area_from_diameter(D));
}
