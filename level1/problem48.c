#include <stdio.h>

void    read_input(float *n1, float *n2)
{
    do {
         printf("Please Enter Loan Amount?\n");
       scanf("%f", n1);
     if(*n1 <= 0)
            printf("Invalid input. Enter a positive number.\n");
    } while(*n1 <=0);
    do {
           printf("How Many Months?\n");
        scanf("%f", n2);
        if(*n2 <= 0)
           printf("Invalid input. Enter a positive number.\n");
    } while(*n2 <= 0);
}
float   Monthly_Installment(float loan_amount,float number_of_number )
{
    float  Monthly_Installment;
     Monthly_Installment = loan_amount / number_of_number;

  return Monthly_Installment;
}
int main()
{
    float loan_amount, number_of_number;
    read_input(&loan_amount, &number_of_number);

    printf("Monthly Installment = %.2f\n", Monthly_Installment(loan_amount, number_of_number));
    return 0;
}