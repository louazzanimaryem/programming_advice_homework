#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void       read_input(int *n)
{
    do
    {
        printf("entre a positive number :\n");
        scanf("%d", n);
        if(*n < 1 || *n > 100)
        {
            printf("invalid input\n");
        }
    } while(*n > 100|| *n < 1);
}
int     rand_num(int from, int to)
{
    return (rand() % (to - from + 1) + from);
}
void    fill_array(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        arr[i] = rand_num(1, 100);
        i++;
    }
}
void    print_aray(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
void    add_array_element(int number, int arr[100], int *size)
{
    (*size)++;
    arr[*size - 1] = number;
}
void    copy_array_elements(int arr_src[100], int size, int arr_dest[100], int *size2)
{
     int i = 0;
     *size2 = 0;
     while(i < size)
     {
         if(arr_src[i] % 2 != 0)
        {
           add_array_element(arr_src[i], arr_dest, size2);
        }
        i++;
     }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int size;
    read_input(&size);
    printf("array 1 elements :\n");
    fill_array(arr, size);
    print_aray(arr, size);
    int arr2[100];
    int size2 ;
   copy_array_elements(arr, size, arr2, &size2);
    printf("array 2 odd number :\n");
    print_aray(arr2, size2);
}