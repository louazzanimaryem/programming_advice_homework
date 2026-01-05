#include <stdio.h>

void    read_input(float  *A)
{
    printf("Please enter square side A ? \n");
    scanf("%f", A);
}
float   calc_CircleAreaInscribedInSquare(float A)
{
    const float pi = 3.14;
    float area;
    area = pi *((A*A)/4);
    return area;
}
void    print_result(float area)
{
    printf("Circle Area = %.2f\n", area);
}
int main()
{
    float A;
    read_input(&A);
    print_result(calc_CircleAreaInscribedInSquare(A));
}