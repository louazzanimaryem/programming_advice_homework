#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     read_random(int from, int to)
{
    int rand_num = rand() % (to - from + 1) + from;
    return(rand_num);
}
void    fill_matrix_array(int arr[3][3], int row, int col)
{
    int i = 0;
    int j =0;
    while(i < row)
    {
        j =0;
        while(j < col)
        {
            arr[i][j] = read_random(1, 100);
             j++;
        }
        i++;
    }
}
void    print_array(int arr[3][3], int row, int col)
{
    int i =0;
    int j =0;
    while(i < row)
    {
        j=0;
        while(j < col)
        {
            printf("%3d", arr[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
}
int   sum_row_matrix(int arr[3][3], int row, int col)
{
    int sum = 0;
    
    int j =0;
    while(j < col -1)
    {
        sum+=arr[row][j];
       j++;
    }
    return (sum);
}
void    print_each_row_sum(int arr[3][3], int row, int col)
{
    printf("the following are the sum of each row in the matrix :\n");
    int i = 0;
    while(i < row)
    {
        printf("%drow", i + 1);
        printf("sum %d\n", sum_row_matrix(arr, i, col));
        i++;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill_matrix_array(arr, 3, 3);
    printf("3 * 3 random matrix\n");
    print_array(arr, 3, 3);
    printf("te sum of row \n");
      print_each_row_sum(arr, 3, 3);
}