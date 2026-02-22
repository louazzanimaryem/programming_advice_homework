#include <stdio.h>
#include <stdbool.h>
bool  check_sparse_matrix(int arr[3][3], int row, int cols)
  {
    int count_zero = 0;
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j =0;
        while(j < cols)
        {
            if(arr[i][j] == 0)
            {
                count_zero++;
            }
            j++;
        }
        i++;
    }
    int total_elements = row * cols;
    
     if(count_zero >= total_elements / 2)
     {
        return true;
     }
     else
     {
        return false;
     }

  }
  int main()
  {
     int matrix1[3][3] = {
        {10, 0, 12},
        {20, 15, 1},
        {0, 0, 9}
     };
     if(check_sparse_matrix(matrix1, 3, 3))
      printf("it is sparse\n");
    else
    {
        printf("it's not sparse");
    }
  }