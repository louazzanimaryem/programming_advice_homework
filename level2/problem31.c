#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void   read_input(int *n)
{
    printf("entre a positive a number :\n");
     scanf("%d", n);
}
void    swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void    print_array_1_N(int arr[100], int size)
{
    int i = 0;
    while (i < size)
    {
        arr[i] = i + 1;
        i++;
    }
}
int     rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
void    shuffle_array(int arr[100], int size)
{
    int i = 0;
    while (i < size)
    {
        int index = rand_num(1, size) -1;
        int index2 = rand_num(1, size)-1;
        swap(&arr[index], &arr[index2]);
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

    int arr[100];
    int size;
    read_input(&size);
    if(size > 100)
    {
        printf("Invalid inpute\n");
        return 0;
    }
     print_array_1_N(arr, size);
     printf("array befor shuff\n");
     print_array(arr, size);

     shuffle_array(arr, size);
     printf("array after shuff\n");
     print_array(arr, size);
    
     return 0;
}
