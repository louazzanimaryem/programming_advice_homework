#include <stdio.h>
void       fill_array(int arr[100], int *size)
{
  *size = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}
void    print_array(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
}
int   check_palindrome(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        if(arr[i] != arr[size - i - 1])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int arr[100], size;
    printf("array elements\n");
     fill_array(arr, &size);
    print_array(arr, size);
     printf("\n");
    if(check_palindrome(arr, size) == 1)
    {
        printf("yes array is palindrome\n");
    }
    else 
    {
        printf("is not palindrome\n");
    }

}