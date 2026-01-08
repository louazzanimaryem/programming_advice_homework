#include <stdio.h>
void    read_input(float  *billvalue)
{
    printf("entre your billvalue\n");
    scanf("%f", billvalue);
}
float  calc_totalbill(float billvalue)
{
    float total;
     total = billvalue * 1.1;
     total = total * 1.16;
     return total;
}
int main()
{
    float billvalue;
    read_input(&billvalue);
    if(billvalue < 0)
    {
        return -1;
    }
    printf("the result id %.2f\n", calc_totalbill(billvalue));
    return 0;
}