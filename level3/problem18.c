#include <stdio.h>

int     intersected_number(int arr[3][3],int arr2[3][3], int row, int cols)
{
     int i = 0, j = 0, x = 0, y = 0; 
    while(i < row)
    {
          j = 0;
        while(j < cols)
        {
             x = 0;
            while(x < row)
            {
                  y = 0;
                while(y < cols)
                {
                    if(arr[i][j] == arr2[x][y])
                     {
                      printf("%d ",arr[i][j]);
                        x = row;
                      break;
                    }
                     y++;
                }
                 x++;
            }
            j++;
        }
          i++;
    }
    printf("\n");
    // return (result);
}
int main()
{
    int matrix1[3][3] = {
        {77, 5, 12},
        {22, 20, 1},
        {1, 0, 9}
};
    int matrix2[3][3] = {
       {5, 80, 90},
       {22, 77, 1},
       {10, 8, 33}
};
   printf("Intersected numbers: ");
    intersected_number(matrix1, matrix2, 3, 3);
  

}