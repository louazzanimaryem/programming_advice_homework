#include <stdio.h>
int   read_input(int *n)
{
    do
    {
        printf("entre array elements :");
        scanf("%d", n);
    } while (*n <= 0);
    return *n;
}
void    read_array(int arr[100], int *arrlength)
{
    printf("entre number of elements :\n");
    scanf("%d", arrlength);
    printf("entre array element: \n");
     int i = 0;
     while (i < *arrlength)
     {
        printf("element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
     }
     printf("\n");
}
void    print_array(int arr[100], int arrlength)
{
    int i = 0;
    while (i < arrlength)
    {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}
int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;
    int i = 0;
    while (i < arrLength)
    {
        if(Number == arr[i])
        {
            count++;
        }
          i++;
    }
    return count; 
}
int main()
{
    int arr[100];
    int arrlength;
    read_array(arr, &arrlength);
    int number_check;
    read_input(&number_check);
    printf("original array : ");
    print_array(arr, arrlength);
    printf("Number: %d\n", number_check);
    printf("is repeated %d time (s)\n",
      TimesRepeated(number_check, arr, arrlength));

}