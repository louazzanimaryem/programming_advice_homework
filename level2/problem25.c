#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     rand_num(int from, int to)
{
    int number = rand() % (to - from + 1) + from;
    return (number);
}
void    rand_array(int arr[100], int *size)
{
    printf("entre a number of elements :\n");
    scanf("%d", size);
    int i = 0;
    while (i < *size)
    {
        arr[i] = rand_num(1, 100);
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
int     min_array(int arr[100], int size)
{
    int i = 0;
    int min = arr[0];
    while (i < size)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        i++;
    }
    return (min);
}
int main()
{
    srand((unsigned) time(NULL));
    int arr[100];
    int size;
    rand_array(arr, &size);
    printf("array elements :\n");
    print_array(arr, size);
    printf("min array is : ");
   int res = min_array(arr, size);
   printf("%d", res);
    return 0;
}
