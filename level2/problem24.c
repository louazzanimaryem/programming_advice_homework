#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     rand_num(int from, int to)
{
    int rand_n =rand() % (to - from + 1) + from;;
   return (rand_n);
}
void    rand_array(int arr[100], int *size)
{
    printf("entre a number of element :");
    scanf("%d", size);
    if(*size < 0 || *size == 0)
    {
        printf("something wrong :");
    }
   int i = 0;
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
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int     max_array(int arr[100], int size)
{
    int i = 0;
    int max = 0;
    while (i < size)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }
    return max;
}
int main()
{
     srand((unsigned)time(NULL));
     int arr[100];
     int size;
     rand_array(arr, &size);
     printf("array elements is : ");
     print_array(arr, size);
     printf("the max is :");
   int res =  max_array(arr, size);
   printf("%d ", res);

}
