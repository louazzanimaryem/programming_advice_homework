#include <stdio.h>

void readnum(int *n1, int *n2,int *n3)
{
    printf("entre your n1 :");
    scanf("%d", n1);
    printf("entre your n2 :");
    scanf("%d", n2);
    printf("entre your n3 :");
    scanf("%d", n3);
}
int sumnumber(int n1, int n2, int n3)
{
      return n1+ n2 +n3;
}
void print_result(int total)
{
    printf("the total sum of number : %d\n", total);
}

int main()
{
   int n1, n2, n3;
   readnum(&n1, &n2, &n3);
  print_result(sumnumber(n1, n2, n3));
}
/*int main()
{
    int n1, n2, n3;
   // int sum;

    printf("entre your number :\n");
    scanf("%d", &n1);
     printf("entre your number 2 :\n");
    scanf("%d", &n2);
     printf("entre your number 3 :\n");
    scanf("%d",&n3);
   
    printf("the sum is : %d\n", sumnumber(n1, n2, n3));
    return 0;
}*/