#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     rand_number(int from, int to)
{
    int ran_num = rand() % (to - from + 1) + from;
    return (ran_num);
}
void    fill_matrix_array(int arr[3][3], int row, int cols)
{
    int i =0;
    int j =0;
    while(i < row)
    {
        j =0;
        while(j < cols)
        {
            arr[i][j] = rand_number(1, 100);
            j++;
        }
        i++;
    }
}
void    print_array(int arr[3][3], int rows, int cols)
{
    int i =0;
    int j =0;
    while(i < rows)
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
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill_matrix_array(arr, 3, 3);
    printf("the following is a 3 * 3 random matrix :\n");
    print_array(arr, 3, 3);
}
