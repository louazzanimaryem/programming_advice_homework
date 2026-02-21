#include <stdio.h>
#include <stdbool.h>

bool check_scalar_matrix(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j =0;
    if(row != cols)
    {
        return false;
    }
    int scalar_value = arr[0][0];
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            if(i == j && scalar_value != arr[i][j])
            {
               return false;
            }
            else if(i != j && arr[i][j] != 0 )
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
    int matrix1[3][3] = {
        {5, 0, 0},
        {0, 5, 0},
        {0, 0, 5}
};

    if(check_scalar_matrix(matrix1, 3,3))
      printf("yes is scalar\n");

    else
      printf("is not scalar\n"); 
}