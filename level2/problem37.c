#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void read_input(int *n)
{
    do {
        printf("Enter a positive number (1-100): ");
        scanf("%d", n);
        if(*n < 1 || *n > 100)
            printf("Invalid input! Try again.\n");
    } while (*n < 1 || *n > 100);
}

int rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}

void    fill_array(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        arr[i] = rand_number(1, 100);
        i++;
    }

}

void    copy_array(int arr_source[100], int arr_dest[100], int size, int *size_dest)
{
    int i = 0;
    while (i < size)
    {
       arr_dest[i] = arr_source[i];
        i++;
    }
    *size_dest = size;
}

void    print_array (int arr[100], int size)
{
    int i = 0;
    while(i < size)
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
    int arr2[200];
    int size2;
     read_input(&size);
    fill_array(arr, size);

     copy_array(arr, arr2, size, &size2);
    printf("array 1 elements :\n");
     print_array(arr, size);
    printf("array 2 elements after copy :\n");
     print_array(arr2, size2);
}
