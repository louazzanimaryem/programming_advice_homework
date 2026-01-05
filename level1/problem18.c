#include <stdio.h>
#include <math.h>
//circel area

void    read_input(float *R)
{
    printf("Please enter radius R ? \n");
    scanf("%f", R);
}
float   calc_circle_area(float R)
{
   const float pi = 3.14;
    float area = (R*R) * pi;
    return area;
}
void        print_result(float area)
{
    printf("Circle Area = %.2f \n", area);
}
int main()
{
    float R;
    read_input(&R);
    print_result(calc_circle_area(R));
}