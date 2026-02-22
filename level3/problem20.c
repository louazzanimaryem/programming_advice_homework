#include <stdio.h>

int   palindrome_matrix(int arr[3][3], int row, int cols)
{
    int i =0;
    int j =0;

        while(i < row)
        {
        j = 0;
        while(j < cols / 2)
         {
            if(arr[i][j] != arr[i][cols-1-j])
            {
                return 0;
            }
             j++;
         }
        i++;
       }
    return 1;
}
int main()
{
    int matrix1[3][3] = {
        {1, 2, 1},
        {2, 3, 2},
        {3, 4, 3}
    };
    if(palindrome_matrix(matrix1, 3, 3))
    {
        printf("is palindrome\n");
    }
    else
    {
        printf("is not palindrome\n");
    }
}