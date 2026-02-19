#include <stdio.h>

void    fiLL_array_order(int arr[3][3], int row, int col)
{
    int i = 0;
    int j = 0;
    int num = 1;

    while(i < row)
    {
        j =0;
        while(j < col)
        {
            arr[i][j] = num;
            num = num + 1;
            j++;
        }
        i++;
    }
}
void    print_array(int arr[3][3], int row, int col)
{
    int i = 0;
    int j = 0;
    while(i < row)
    {
        j = 0;
        while(j < col)
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
    int arr[3][3];
    printf("the following is a 3 * 3 ordered matrix :\n");
    fiLL_array_order(arr, 3, 3);
    print_array(arr, 3, 3);
}