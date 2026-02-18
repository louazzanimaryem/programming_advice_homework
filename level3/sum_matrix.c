#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rand_name(int from, int to)
{
    int rand_n;
   rand_n = rand() % (to - from + 1) + from;
   return (rand_n);
}
void fill_matrix_array(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j =0;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            arr[i][j] = rand_name(1, 100);
            j++;
        }
        i++;
    }
}
void  print_array(int arr[3][3], int row, int cols)
{
    int i = 0;
    int j;
    while(i < row)
    {
        j = 0;
        while(j < cols)
        {
            printf("%3d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
void sum_matrix_array(int arr[3][3], int row, int cols)
{
    int sum = 0;
    int i = 0;
    int j = 0;
       while(i < row)
       {
          j = 0;
           sum = 0;
           while(j < cols)
           {
             // sum = 0;
              sum +=arr[i][j];
              j++;
           }
           printf("row %d sum = %d\n", i, sum);
           i++;
       } 
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill_matrix_array(arr, 3, 3);
    printf("the following are the sum of each row in the matrix \n");
    print_array(arr, 3, 3);
    printf("the following are the sum of each row in the matrix \n");
       sum_matrix_array(arr, 3, 3);
}