#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void    read_input(int *n)
{
    do {
        printf("entre a positive number :\n");
        scanf("%d", n);
    } while (*n > 100 || *n <= 0);
}
int     rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
void    fill_array(int arr[100], int size)
{
    int i =0;
    while (i < size)
    {
        arr[i] = rand_number(1, 100);
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
void    reverse_array(int arr[100], int size)
{
    int i = 0;
    int temp;
    while (i < size / 2)
    {
       temp = arr[i];
       arr[i] = arr[size - 1 - i];
       arr[size - 1 - i] = temp;
       i++;
    }
}
void    CY_array_after_rever(int arr[100], int size, int copy_array[100])
{
    int i = 0;
    while (i < size)
    {
        copy_array[i] = arr[i];
        i++;
    }
}
int main()
{
    int arr[100];
    int size;
    int copy_array[100];
    read_input(&size);
    fill_array(arr, size);
    printf("array 1 elements \n");
    print_array(arr, size);
    printf("array 2 elements after copying array 1 in reversed order :\n");
    reverse_array(arr, size);
    CY_array_after_rever(arr, size, copy_array);
    print_array(copy_array, size);

}