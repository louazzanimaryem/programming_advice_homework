#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int     rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
void    fiLL_matrix_arr(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j =0;
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

void    print_array(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            printf(" %0*d ",2, arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
void    multiply_array(int arr[3][3],int arr2[3][3], int result[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            result[i][j] = arr[i][j] * arr2[i][j];
            j++;
        }
        i++;
    }   
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3], arr2[3][3], result[3][3];
    printf("Matrix1\n");
      fiLL_matrix_arr(arr, 3,3);
      print_array(arr, 3, 3);
    printf("Matrix2\n");
      fiLL_matrix_arr(arr2, 3, 3);
       print_array(arr2, 3, 3);
    printf("result\n");
       multiply_array(arr, arr2,result, 3, 3);
       print_array(result, 3, 3);
    return 0;
}


