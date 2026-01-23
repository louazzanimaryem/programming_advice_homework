#include <stdio.h>
void    read_input(int *n)
{
    printf("entre a positive number :\n");
    scanf("%d", n);
    if (*n < 1 || *n > 100)
    {
        printf("Invalid size!\n");
    }
}
void    semi_dynamic(int arr[100], int size)
{
   int i = 0;
   while(i < size)
   {
      printf("entre element %d: ", i + 1);
      scanf("%d", &arr[i]);
      i++;
   }
}
void    print_number(int arr[100], int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
int main()
{
  int arr[100];
  int size;
  read_input(&size);
    semi_dynamic(arr, size);
    printf("array length : %d\n", size);
    printf("array elements : ");
    print_number(arr, size);
}

