#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int     rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1)+ from;
    return (rand_n);
}
void    fiLL_matrix_arr(int arr[3][3], int row, int col)
{
    int i =0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < col)
        {
            arr[i][j] = rand_num(1, 100);
            j++;
        }
        i++;
    }
}
void    print_array_matrix(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            printf("%3d ", arr[i][j]);
            j++;
        }
         printf("\n");
        i++;
    }
}
void    sum_matrix(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    while(i < row)
    {
         sum = 0;
        j =0;
        while(j < cols)
        {
           sum+=arr[i][j];
           j++;
        }
        i++;
    }
    printf("the sum matrix is : %d\n", sum);
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    printf("matrix1 :\n");
    fiLL_matrix_arr(arr, 3, 3);
    print_array_matrix(arr, 3, 3);
    sum_matrix(arr, 3, 3);
}
