#include <stdio.h>

void    read_input(float *loanAmount, float *monthlyInstallment)
{
    do
    {
        printf("Please Enter Loan Amount? ");
        scanf("%f", loanAmount);
        if (*loanAmount <= 0)
            printf("Invalid input. Enter a positive number.\n");
    } while (*loanAmount <= 0);

    do
    {
        printf("Please Enter Monthly Installment? ");
        scanf("%f", monthlyInstallment);
        if (*monthlyInstallment <= 0)
            printf("Invalid input. Enter a positive number.\n");
    } while (*monthlyInstallment <= 0);
}
float   total_month(float loanAmount, float  MonthlyInstallment)
{
    return loanAmount / MonthlyInstallment;
}
int main()
{
    float month, Monthly_Installment;
    read_input(&month, &Monthly_Installment);
    if (Monthly_Installment == 0)
   {
      printf("Invalid monthly installment\n");
    return 0;
   }

    printf("total months to pay = %.2f\n", total_month(month, Monthly_Installment));
    return 0;
}