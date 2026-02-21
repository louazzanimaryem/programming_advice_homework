#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int     rand_num(int from, int to)
{
    int rand_n = rand() % (to - from + 1)+from;
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
            arr[i][j] = rand_num(1, 10);
            j++;
        }
        i++;
    }
}
void    print_array(int arr[3][3], int row, int cols)
{
    int i =0;
    int j = 0;
    while(i < row)
    {
        j =0;
        while(j < cols)
        {
            printf("%3d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

bool     check_typical(int arr[3][3],int arr2[3][3], int row, int cols)
{
     int i = 0;
     int j =0;
     while(i < row)
     {
        j = 0;
        while(j < cols)
        {
            if(arr[i][j] != arr2[i][j])
            {
                return false;
            }
            j++;
        }
        i++;
     }
     return true;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3], arr2[3][3];
    printf("matrix1 :\n");
     fiLL_matrix_arr(arr, 3, 3);
     print_array(arr, 3, 3);
    printf("matrix2 :\n");
     fiLL_matrix_arr(arr2, 3, 3);
     print_array(arr2, 3, 3);
     if(check_typical(arr, arr2, 3, 3))
     {
        printf("is equal\n");
     }
     else
     {
        printf("is not equal\n");
     }
}

