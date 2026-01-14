#include <stdio.h>
void    read_input(int *n)
{
    printf("Please entre a positive number 1: \n");
    scanf("%d", n);
    //printf("Please entre a positive number 2: \n");
   // scanf("%d", k);
}
void   print_pattern_number(int n)
{
    int i = 1;
      while (i <= n)
      {
         int j = 1;
         
            while (j <= i )
            {
               printf("%d", i);
               j++;
            }
            printf("\n");
            i++;
      } 
}
int main()
{
    int n;
    read_input(&n);
    print_pattern_number(n);
}