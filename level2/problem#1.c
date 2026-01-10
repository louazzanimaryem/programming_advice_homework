#include <stdio.h>

void    print_header(void)
{
    printf("\n\t\t Multiplication Table From 1 to 10\n\n");
     printf("   |");
    int c = 1;
  for (int c = 1; c <= 10; c++)
  
    printf("%4d", c);
    printf("\n");
  
    printf("------+");
    for(int c = 1; c <= 10; c++)
    printf("-----");
    printf("\n");
}

void    print_multiplacation_table()
{
    print_header();
   for (int i = 1; i <= 10; i++)
   {
        printf("%3d |",i);
        for(int c = 1; c <= 10; c++)
        {
            printf("%4d", i * c);
        }
        printf("\n");
   }
   printf("\n");
}
int main()
{
    print_multiplacation_table();
    return 0;
}