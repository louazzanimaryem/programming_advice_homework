#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
void    read_input(int *num)
{
    
     printf("entre a positive number :\n");
    scanf("%d", num);
}
int rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
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
    printf("\n");
}
void    add_array_element(int number,int arr[100], int *size2)
{
    (*size2)++;
    arr[*size2 -1] = number;
}
int     check_prime(int numbe)
{

    if(numbe < 2)
    return 0;
    int i = 2;
    while(i * i <= numbe)
    {
        if(numbe % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
 
void    copy_array(int src_arr[100], int dest_arr[100], int src_size, int *dest_size)
{
     int i = 0;
     *dest_size = 0;
     while(i < src_size)
     {
        if(check_prime (src_arr[i]) == 1)
        {
           add_array_element(src_arr[i], dest_arr,  dest_size);
        }
          i++;
     }

}
int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int size;
     read_input(&size);
    printf("array 1 elements :\n");
     fill_array(arr1, size);
    print_array(arr1, size);
    int arr2[100];
    int size2;
    printf("array 2 prime number :\n");
     copy_array(arr1, arr2, size,&size2);
    print_array(arr2, size2);
}

