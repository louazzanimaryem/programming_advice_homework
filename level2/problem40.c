#include <stdio.h>

void    fill_array(int arr[100], int *size)
{
    *size = 10;

    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
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
void copy_array(int src_arr[100], int dest_arr[100], int src_size, int *dest_size)
{
    int i = 0;
    *dest_size = 0;
    
    while(i < src_size)
    {
        if(i == 0 || src_arr[i] != src_arr[i - 1])
        {
            add_array_element(src_arr[i], dest_arr, dest_size);
        }
        i++;
    }
}

int main()
{
    int arr1[100], size, arr2[100], size2;
    printf("array 1 elements :\n");
    fill_array(arr1, &size);
    print_array(arr1, size);

    printf("array 2 distinct elements:\n");
     copy_array(arr1, arr2, size, &size2);
    print_array(arr2, size2);

}