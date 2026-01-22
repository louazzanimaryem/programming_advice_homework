#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     rand_number(int from, int to)
{
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
}
int     read_array(int arr[100], int *size)
{
    printf("entre a number element :\n");
    if((scanf("%d", size) != 1))
    {
        return 0;
    }
    if (*size <= 0 || *size > 100)
    {
       return 0;
    }
    int i = 0;
    while (i < *size)
    {
        arr[i] = rand_number(1, 100);
        i++;
    }
    return 1;
}
void    print_array(int arr[100], int size)
{
     int i = 0;
     while (i < size)
     {
        printf("%d ", arr[i]);
        i++;
     }
}
int   prime_num(int n)
{
    int i;
    if(n <= 1)
    return 0;
    i = 2;
    while (i * i <= n)
    {
        if(n % i ==0)
        return 0;
        i++;
    }
    return 1;
}
void     prime_number_in_array(int arr[100], int size, int copy_array[100])
{
    int i = 0;
    int j = 0;
    while (i < size)
    {
        if(prime_num(arr[i]))
        {
           // printf("%d ",arr[i]);
           copy_array[j] = arr[i];
           printf("%d ", copy_array[j]);
            j++;
        }
        i++;
    }   
}  
int main()
{
      srand((unsigned)time(NULL));

    int arr[100];
    int size;
    int copy_arry[100];
      if(!read_array(arr, &size)) 
        {
        printf("Invalid size!\n");
        return 1;
        }
    printf("array elements :\n");
    print_array(arr, size);
    printf("\n");
    printf("prime number in array2 :\n");
    prime_number_in_array(arr, size, copy_arry);
    printf("\n");
return (0);
}