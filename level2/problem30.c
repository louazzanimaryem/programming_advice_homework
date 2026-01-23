#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void    read_input(int  *size)
{
     printf("entre a number of element :\n");
     scanf("%d", size);
    if (*size <= 0 || *size > 100)
     {
        printf("invalid input \n");
     }
}
int     rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
void     read_array1(int arr[100], int size)
{
       int i = 0;
       while (i < size)
       {
         arr[i] = rand_number(1, 100);
         i++;
       }
}

void    sum_array(int arr[100], int arr2[100], int arr_sum[100], int size)
{
    int i = 0;
    while (i < size)
    {
        arr_sum[i] = arr[i] + arr2[i];
        printf ("%d ",arr_sum[i]);
        i++;
    }
}
void    print_array(int arr[100], int size)
{
    int i = 0;
    while (i < size)
    {
         printf("%d ", arr[i]);
       i++;
    }
    printf("\n");
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arr2[100], sum_arr[100];
    int size;
    read_input(&size);
     read_array1(arr, size);
     read_array1(arr2, size);
    printf("elements 1\n");
     print_array(arr, size);
    printf("elements 2\n");
      print_array(arr2, size);
    printf("sum of array :\n");
      sum_array(arr, arr2, sum_arr, size);
    printf("\n");
}