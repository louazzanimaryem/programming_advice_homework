#include <stdio.h>
void    readMarks(int *mark1, int *mark2,int  *mark3)
{
    printf("entre mark1 :");
    scanf("%d", mark1);
    printf("entre mark2 :");
    scanf("%d", mark2);
    printf("entre mark3 :");
    scanf("%d", mark3);
}

float sumaverge(int mark1, int mark2, int mark3)
{
    return ((mark1 + mark2 + mark3) / 3 );
}

void  check_averge(float average)
{
   if (average >= 50)
        printf("PASS\n");
    else
        printf("FAIL\n");
}

void print_reslt(float average)
{
    printf("your average is :%.2f\n", average);
    
}
int main()
{
    int mark1, mark2, mark3;
    readMarks(&mark1, &mark2, &mark3);
    float average = sumaverge(mark1, mark2, mark3);
    print_reslt(average);
    check_averge(average);
}

