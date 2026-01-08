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
void    SecondsToTaskDuration( int total_seconds, int  *day, int *hours, int* minute, int *second)
{
    const int seconds_day = 24 * 60 *60;
    const int second_hour = 60 *60;
    const int second_minute = 60;
    int remainder = 0;

   *day = total_seconds / seconds_day;
        remainder = total_seconds % seconds_day;
   *hours =  remainder / second_hour;
        remainder = remainder % second_hour;
   *minute = remainder / second_minute;
  
   *second = remainder % second_minute;
}
int main()
{
    int day, hours, minute, second;
    int total_second;
     printf("Enter total seconds: ");
    scanf("%d", &total_second);

    SecondsToTaskDuration (total_second, &day, &hours, &minute, &second);

    printf ("%d:%d:%d:%d\n", day, hours, minute, second);

    return 0;
}
