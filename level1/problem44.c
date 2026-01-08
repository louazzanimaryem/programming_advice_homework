#include <stdio.h>
void    read_input(int *n)
{
    printf("Please enter day number (Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7)?\n");
    scanf("%d", n);
     while(*n < 1 || *n > 7)
    {
        printf("Error! Enter a valid day number (1-7): ");
        scanf("%d", n);
    }
}
void    get_day_week(int n)
{
    if (n == 1)
    {
        printf("saturday\n");
    }
    else if(n == 2)
    {
        printf("sunday\n");
    }
    else if(n == 3)
    {
        printf("monday\n");
    }
     else if(n == 4)
    {
        printf("tuesday\n");
    }
     else if(n == 5)
    {
        printf("wednesday\n");
    }
     else if(n == 6)
    {
        printf("thursday\n");
    }
     else if(n == 7)
    {
        printf("friday\n");
    }
    else
    {
        printf("not a valid day\n");
    }
}
int main()
{
    int n;
    read_input(&n);
      get_day_week(n);
      return 0;
}