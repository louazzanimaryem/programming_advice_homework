#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int     rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return rand_n;
}
void    fill_matrix_array(int arr[3][3],int row,int cols)
{
    int i =0;
    int j =0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            arr[i][j] = rand_number(1, 100);
            j++;
        }
        i++;
    }
}
void    print_array(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j =0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            printf("%3d  ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
void sum_matrix_array(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    int sum = 0;

    while(j < cols)
    {
        i = 0;
        sum = 0;
        while(i < row)
        {
            sum+=arr[i][j];
            i++;
        }
              printf("cols %d the sum %d\n", j, sum);
        j++;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill_matrix_array(arr, 3, 3);
       printf("the following is a 3 * 3 randome matrix\n");
    print_array(arr, 3, 3);
    printf("the following are the sum of each col in the matrix \n");
    sum_matrix_array(arr, 3, 3);
}
