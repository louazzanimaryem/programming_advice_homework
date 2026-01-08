#include <stdio.h>
void    read_input(float *num, float *totalcashpaid)
{
    printf("entre your number positive\n");
    scanf("%f", num);
     printf("entre your totalcashpaid\n");
    scanf("%f", totalcashpaid);
}
float   calc_remainder(float totalbill, float totalcashpaid)
{
  
     return totalcashpaid - totalbill;
}
int main()
{
    float totalbill, totalcashpaid;
    
    read_input(&totalbill, &totalcashpaid);
      if(totalcashpaid < totalbill)
    {
         printf("Error: cash paid is less than the total bill!\n");
    }
    else
    printf("remainder = %.2f\n", calc_remainder(totalbill, totalcashpaid));
      printf("*********************************************\n");
    return 0;
}