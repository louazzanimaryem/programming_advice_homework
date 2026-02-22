#include <stdio.h>

void    min_matrix(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    int min = arr[0][0];
    while(i < row)
    {
         j = 0;
        while(j < cols)
        {
           if(arr[i][j] < min)
           {
              min = arr[i][j];
           }
           j++;
        }
        i++;
    }
      printf("the min in matrix is %d\n", min);
}
void       max_matrix(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    int max = arr[0][0];
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
            j++;
        }
        i++;
    }
    printf("the max in matrix is %d\n", max);
}
int main()
{
    int matrix[3][3] = {
        {77, 5, 12},
        {22, 20, 6},
        {14, 3, 9}
    };
    min_matrix(matrix, 3, 3);
    max_matrix(matrix, 3, 3);
}