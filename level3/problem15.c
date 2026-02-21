#include <stdio.h>

int     count_number_matrix(int arr[3][3],int number, int row, int cols)
{
    int i = 0;
    int j = 0;
    int count = 0;
    
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
           if(arr[i][j] == number)
           {
             count++;
           }
           j++;
        }
        i++;
    }
    return count;
}
    int main()
    {
        int number;
        printf("entre the number to count in matrix?\n");
        scanf("%d", &number);
        int matrix1[3][3] ={
            {9, 0, 12},
            {0, 9, 1},
            {0, 9, 9}
        };
       int count = count_number_matrix(matrix1, number, 3,3);
        printf("number %d count in matrix is %d\n", number, count);
        return 0;
    }
