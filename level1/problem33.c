#include <stdio.h>

void  read_input(int *grade)
{
    printf("entre your grade :\n");
    scanf("%d", grade);
}
char    check_grade(int grade)
{
    if(grade >= 90)
    {
       printf("A\n");
    }else if(grade >= 80)
    {
       printf("B\n");
    }
    else if(grade >= 70)
    {
       printf("C\n");
    }
    else
    {
       printf("F\n");
    }
}
int main()
{
    int garde;
    read_input(&garde);
      check_grade(garde);
}