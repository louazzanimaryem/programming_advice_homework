#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int     rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
void       fiLL_matrix_arr(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            arr[i][j] = rand_num(1, 10);
            j++;
        }
        i++;
    }
}
void    print_array(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            printf("%3d ",arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
int     sum_matrix(int arr[3][3], int row, int cols)
{
    int sum = 0;
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j =0;
        while(j < cols)
        {
            sum+=arr[i][j];
            j++;
        }
        i++;
    }
    return sum;
}
bool    compare_two_matrix(int arr[3][3], int arr2[3][3], int row, int cols)
{
    return (sum_matrix(arr, row,cols) == sum_matrix(arr2, row, cols));
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3],arr2[3][3];
    printf("matrix1:\n");
    fiLL_matrix_arr(arr, 3,3 );
    print_array(arr, 3,3);
    printf("matrix2:\n");
    fiLL_matrix_arr(arr2, 3,3);
    print_array(arr2, 3,3);
    if(compare_two_matrix(arr, arr2, 3, 3))
    {
        printf("is equal \n");
    }
    else
    {
        printf("not equal\n");
    }
    return 0;
}

