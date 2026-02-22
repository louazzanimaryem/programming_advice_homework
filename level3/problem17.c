#include <stdio.h>
#include <stdbool.h>
bool  check_number_exists(int arr[3][3],int number, int row, int cols)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j =0;
        while(j < cols)
        {
            if(arr[i][j] == number)
             {
                 return true;
             }
             j++;
        }
        i++;
    }
    return false;
}
int main()
{
    int number;
    printf("please enter the number to look in matrix?\n");
    scanf("%d", &number);

    int matrix1[3][3] = 
    {
        {77, 5, 12},
        {22, 20, 1},
        {1, 0, 9}
    };
    if(check_number_exists(matrix1, number, 3, 3))
      printf("yes it is there\n");
    else
    printf("not\n");
}