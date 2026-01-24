#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_num(int from,int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return(rand_n);
}
void    read_input(int *n)
{
    printf("entre a positive number\n");
    scanf("%d", n);
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
void    print_array(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
}
int     count_odd(int arr[100], int size)
{
    int i = 0;
    int count = 0;
    while(i < size)
    {
        if(arr[i] % 2 != 0)
        {
             count++;
        }
     i++;
    }
    return (count);
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int size;
     read_input(&size);
    printf("array elements :\n");
     fill_array(arr, size);
     print_array(arr, size);
    printf("\n");
     int count = count_odd(arr, size);
    printf("odd number count is : %d\n", count);
    return 0;
}
