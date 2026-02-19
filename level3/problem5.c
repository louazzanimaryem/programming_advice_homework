#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int     rand_num(int from, int to)
{
    int rand_n = rand () % (to - from + 1) + from;
    return(rand_n);
}
void   fill_matrix_array(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
              arr[i][j] = rand_num(1, 100);
              j++;
        }
        i++;
    }

}
void    print_array(int arr[3][3], int row, int col)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < col)
        {
              printf("%3d  ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
int col_sum(int arr[3][3], int row, int col)
{
    int sum = 0;
    int i = 0;
    while(i < row)
    {
        sum += arr[i][col];
        i++;
    }
    return (sum);
}
void    sum_matrix_cols_array(int arr[3][3], int arr_sum[3], int row, int cols)
{
    int i = 0;
   
    while(i < cols)
    {
        arr_sum[i] = col_sum(arr, row, i);
      
        i++;
    }
}
void  print_col_sum_array(int arr[3], int length)
{
    printf("the following are the sum of each col is the matrix \n");
    int i = 0;
    while(i < length)
    {
        printf("col %d the sum %d\n", i , arr[i]);
        i++;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arr_sum[3];
    fill_matrix_array(arr, 3, 3);
    printf("the following is a 3* 3 random matrix \n");
    print_array(arr, 3, 3);
   sum_matrix_cols_array(arr, arr_sum, 3, 3);
    print_col_sum_array(arr_sum, 3);

    return 0;
}