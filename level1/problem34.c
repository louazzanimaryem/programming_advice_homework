#include <stdio.h>
void    read_input(float *total)
{
    printf("entre total :\n");
    scanf("%f", total);
}
float check_total(float total)
{
    if(total >= 1000000)
    {
        return 0.01;
    }
    else if(total >= 500000)
    {
        return 0.02;
    }
    else if(total >= 100000)
    {
        return 0.03;
    }
    else if(total >= 50000)
    {
        return 0.05;
    }
    else 
    {
        return 0.00;
    }
}
float   clac_total(float total)
{
    return check_total(total) * total;
}
int main()
{
    float total;
    read_input(&total);
    printf("commision percentage = %.2f%%\n", check_total(total) * 100);
    printf("total commision = %.2f", clac_total(total));
    return 0;
}