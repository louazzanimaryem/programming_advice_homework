#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
void    read_array(int arr[100], int *size)
{
    printf("entre a number elements :\n");
    scanf("%d", size);
    int i = 0;
    while (i  < *size)
    {
        arr[i]= rand_number(1, 100);
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
int   sum_array_average(int arr[100], int size)
{
    int sum = 0;
    int i = 0;
    while (i < size)
    {
       sum+=arr[i];
       i++;
    }
    return (sum);
}
float  sum_average(int arr[100], int size)
{
    if (size == 0)
    return 0;

    return ((float)sum_array_average(arr, size) / size);
}
int main()
{
     srand((unsigned)time(NULL));
    int arr[100];
    int size;
    read_array(arr, &size);
    printf("array elements :\n");
     print_array(arr, size);
    float avergae = sum_average(arr, size);
    printf("the average is : %f", avergae);
}
