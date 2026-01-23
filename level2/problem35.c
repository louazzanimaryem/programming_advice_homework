#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void    read_input(int *n)
{
    printf("entre a positive number :\n");
    scanf("%d", n);
}
int  rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1)+ from;
    return (rand_n);
}
void    fill_array(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        arr[i] = rand_number(1, 100);
        i++;
    }
}
void    print_array(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
}
int   search_array(int arr[100], int size, int num)
{
    int i = 0;
    while(i < size)
    {
        if (arr[i] == num)
        {
          return 1;
        }
        i++;
    }
return -1;
}
   
int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int size;
     read_input(&size);
    printf("array 1 elements :\n");
     fill_array(arr, size);
     print_array(arr, size);
    printf("\n");
    int num;
    printf("please enter a number to search for ? \n");
    scanf("%d", &num);
   int result = search_array(arr, size, num);
   if(result == 1)
   {
    printf("yes, the number is found :)\n");
   }
   else if(result == -1)
   {
    printf("NO, the number is not found :(\n");
   }
   return 0;
}
