#include <stdio.h>
#include <stdbool.h>

bool  check_identity_matrix(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j = 0;
    if(row != cols)
    {
        return false;
    }
    while(i < row)
    {
          j =0;
        while(j < cols)
        {
            if(i == j)
            {
                if(arr[i][j] != 1)
                return false;
            }
            else if(i != j)
            {
                if(arr[i][j] != 0)
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
    int matrix1[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
};
    int matrix2[3][3] ={
       {1, 0, 0},
       {0, 5, 0},
       {0, 0, 1}
};
   if(check_identity_matrix(matrix1, 3, 3))
    printf("matrix 1 is identity\n");
   else
    printf("matrix is not identity\n");
   
    if(check_identity_matrix(matrix2, 3, 3))
     printf("matrix2 is identity\n");
    else
     printf("matrix2 is not identity\n");
    return 0;
}