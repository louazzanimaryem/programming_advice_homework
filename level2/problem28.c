#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int        rand_numner(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
int    read_array(int arr[100], int *size)
{
     printf("enter number of elements:\n");
    if (scanf("%d", size) != 1)
        return 0;
    if (*size <= 0 || *size > 100)
        return 0;
      int i = 0;
    while (i < *size)
    {
        arr[i] = rand_numner(1, 100);
        i++;
    }
    return 1;
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
void     print_copy(int arr[100], int size,  int copy_array[100])
{
     int i = 0;
    while (i < size)
    {
         copy_array[i] = arr[i];
         printf("%d ", copy_array[i]);
         i++;
    }
}
int main()
{
     srand((unsigned)time(NULL));

     int arr[100];
     int size;
        if (!read_array(arr, &size)) 
        {
        printf("Invalid size!\n");
        return 1;
       }
       printf("array 1 elements :\n");
       print_array(arr, size);
       printf("array 1 after copy :\n");
       int copy_array[100];
       print_copy(arr, size,  copy_array);
       printf("\n");
}
