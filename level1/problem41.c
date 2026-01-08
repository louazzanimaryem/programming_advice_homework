#include <stdio.h>
void    read_input(int *n_hours)
{
    printf("entre the num of hours\n");
    scanf("%d", n_hours);
}
void  calc_week_day(int n_hours)
{
    int day, week;
    day = n_hours / 24;
    week = day / 7;
    printf("the day is :%d\n", day);
    printf("the week is:%d\n", week);
}
int main()
{
    int n_hours;
    read_input(&n_hours);
    if (n_hours < 0)
{
    printf("error: hours must be positive\n");
    return;
}
    calc_week_day(n_hours);
}