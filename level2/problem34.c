 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 void   read_input(int *n)
 {
    do {
    printf("entre a positive a number :\n");
    scanf("%d",n);
    } while(*n > 100 || *n <= 0);
 }
 int       rand_number(int from, int to)
 {
    int rand_n = rand() % (to - from + 1) + from;
    return (rand_n);
 }
 void   fill_array(int arr[100], int size)
 {
    int i = 0;
    while (i < size)
    {
        arr[i] = rand_number(1, 100);
        i++;
    }
 }
 void   print_array(int arr[100], int size)
 {
    int i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
 }
 int   search_number(int arr[100], int size, int num)
 {
    int i = 0;
    while(i < size)
    {
        if (arr[i] == num)
        {
            return i;
        }
        i++;
    }
    return -1;
 }
 void   number_order(int arr[100], int size, int num)
 {
    int i = 0;
    while(i < size)
    {
        if(arr[i] == num)
        {
            printf("%d", i+1);
        }
        i++;
    }
 }
 int main()
 {
     srand((unsigned) time(NULL));
    int arr[100];
    int size;
    read_input(&size);
    printf("array 1 elements :\n");
    fill_array(arr, size);
    print_array(arr, size);
    printf("\n");
    int num;
    printf("number you are looking for is :\n");
    scanf("%d", &num);
   int result= search_number(arr, size, num);
   printf("index is\n");
   printf("%d", result);
    printf("\n");
    printf("number found its order :\n");
    number_order(arr, size, num);
    printf("\n");
 }
