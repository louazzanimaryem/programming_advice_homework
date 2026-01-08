#include<stdio.h>
void    read_input(int  *p,int  *n, int *d, int *q, int *dollar)
{
    printf("Please enter the total number of Pennies:");
    scanf("%d", p);
    printf("Please enter the total number of Nickels:");
    scanf("%d", n);
    printf("Please enter the total number of dimes:");
    scanf("%d", d);
    printf("Please enter the total number of quarters:");
    scanf("%d", q);
    printf("Please enter the total number of dollar:");
    scanf("%d", dollar);
}

int     calc_total(int p, int n, int d, int q, int dollar)
{
    int total_p = p * 1
    + n * 5 + d * 10 + q * 25 + dollar * 100;
    return total_p;
}
int main()
{
    int p, n, d, q, dollar;
    read_input(&p,&n, &d, &q, &dollar); 
    printf("total pennis = %d\n", calc_total(p, n, d, q, dollar));
    printf("total dollars = %d $\n", calc_total(p, n, d, q, dollar) / 100);
    return 0;
}