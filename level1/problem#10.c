#include <stdio.h>
void   readnum(int *mark1, int *mark2, int *mark3)
{
     printf("entre mark1 :");
    scanf("%d", mark1);
    printf("entre mark2 :");
    scanf("%d", mark2);
    printf("entre mark3 :");
    scanf("%d", mark3);
}
int sumaverge(int mark1, int mark2, int mark3)
{
    return (mark1 + mark2 + mark3);
}
float  calc_avg(int n1, int n2, int n3)
{
    return (float) sumaverge(n1, n2 ,n3) /3 ;
}
void print_result(float average)
{
    printf("the average is %.2f: ", average);
}
int main()
{
    int n1, n2, n3;
    readnum(&n1, &n2, &n3);
    print_result(calc_avg(n1, n2, n3));
    return 0;
}