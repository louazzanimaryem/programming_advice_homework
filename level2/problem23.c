#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     rand_num( int from,int  to)
{
   
    int randnum = rand() %(to - from + 1) + from;
     return(randnum);
}
void    arr_rand(int arr[100], int *size)
{
     printf("entre number of elements :");
      scanf("%d", size);
    int i =0;
    while (i < *size)
    {
      arr[i] = rand_num(1, 100);
      i++;
    }
}
void    print_array(int arr[100], int size)
{
      int i = 0;
     while (i < size)
     {
     printf("%d ",arr[i]);
      i++;
     } 
    printf("\n");  
}
int main()
{
       srand((unsigned)time(NULL));
      int arr[100];
      int size;
       arr_rand(arr, &size);
       printf("array elements :");
       print_array(arr, size);
}