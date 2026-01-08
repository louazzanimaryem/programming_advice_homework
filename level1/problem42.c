#include <stdio.h>
void    read_inpute(int *day, int  *n_hous, int *minute, int *second)
{
    printf("entre the number day: \n");
     scanf("%d", day);
     while(*day <= 0)
     {
        printf("Error! Enter number of days (positive): ");
        scanf("%d", day);
     }
    printf("entre the number hours: \n");
     scanf("%d", n_hous);
      while(*n_hous <= 0)
     {
        printf("Error! Enter number of hours (positive): ");
        scanf("%d", n_hous);
     }
    printf("entre the number minute: \n");
     scanf("%d", minute);

      while(*minute <= 0)
     {
        printf("Error! Enter number of minute (positive): ");
        scanf("%d", minute);
     }
    printf("entre the number second: \n");
     scanf("%d", second);
      while(*second <= 0)
     {
        printf("Error! Enter number of second (positive): ");
        scanf("%d", second);
     }
}
int     TaskDurationInSeconds(int day, int  n_hous, int minute, int second)
{
    int DurationInSeconds;
    DurationInSeconds = day *24*60*60;
    DurationInSeconds+= n_hous*60*60;
    DurationInSeconds += minute *60;
    DurationInSeconds+=second;
   return DurationInSeconds;
}
int main()
{
    int day, hours, minute, second;
    read_inpute(&day, &hours, &minute, &second);
   
    printf("the result %d\n", TaskDurationInSeconds(day, hours, minute, second));
    return 0;
}