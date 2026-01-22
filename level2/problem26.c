#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return rand_n;
}
void    read_array(int arr[100], int *size)
{
       printf("entre a number of element :");
       scanf("%d", size);
    int i = 0;
    while (i < *size)
    {
        arr[i] = rand_number(1, 100);
        i++;
    }
}
void    print_array_after_read(int arr[100], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
int sum_random_array(int arr[100], int size)
{
    int i = 0;
    int sum = 0;
    while (i < size)
    {
         sum +=arr[i];
         i++;
    }
    return (sum);
}
int main()
{
     srand((unsigned) time(NULL));
     int arr[100];
      int size;
    read_array(arr, &size);
      printf("array elements :");
     print_array_after_read(arr, size);
     int sum = 0;
     sum = sum_random_array(arr, size);
     printf("the sum is : %d\n", sum);
}