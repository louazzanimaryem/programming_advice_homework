#include <stdio.h>
#include  <time.h>
#include <stdlib.h>
int rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return rand_n;
}
void    fiLL_matrix_arr(int arr[3][3], int row, int cols)
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
void    print_matrix(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            printf("%0 *d ",2, arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
void    middle_matrix_row(int arr[3][3],int row, int cols)
{
    int middle_row = row / 2;
    int j = 0;
    while(j < cols)
    {
        printf("%0*d ", 2, arr[middle_row][j]);
        j++;
    }
    printf("\n");
}
void  midd_mat_col(int arr[3][3], int row, int cols)
{
    int middle_col = cols / 2;
    int j = 0;
    while(j < cols)
    {
          printf("%0*d ",2, arr[j][middle_col]);
        j++;
    }
    printf("\n");
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    printf("Matrix1\n");
      fiLL_matrix_arr(arr, 3, 3);
      print_matrix(arr, 3, 3);
    printf("middle row of matrix1 is :\n");
    middle_matrix_row(arr,3, 3);
    printf("middle col of matrix is :\n");
    midd_mat_col(arr, 3, 3);
}
