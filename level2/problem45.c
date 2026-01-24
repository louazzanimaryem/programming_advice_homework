#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int     rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}

void    read_array(int *n)
{
    printf("entre a positive number\n");
    scanf("%d", n);
}

void    fill_array(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        arr[i] = rand_num(-100, 100);
        i++;
    }
}

void    print_array(int arr[100], int size)
{
    int i =0;
    while(i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
}

int     count_negative_numbers(int arr[100], int size)
{
    int i = 0;
    int count = 0;
    while(i < size)
    {
        if(arr[i] < 0)
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
    read_array(&size);
    printf("array elements :\n");
    fill_array(arr, size);
    print_array(arr, size);
    printf("\n");
    int num = count_negative_numbers(arr, size);
    printf("count negative number :%d\n", num);
    return 0;
}