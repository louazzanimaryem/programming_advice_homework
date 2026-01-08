#include <stdio.h>

void    read_input(int *n, int * m)
{
     printf("entre your n \n");
    scanf("%d", n);
      printf("entre your m \n");
   scanf("%d", m);
}
  
int     power_of_m(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    int p = 1;
    int i = 1;
    while (i <= m)
    {
        p = p * n;
        i++;
    }
    return p;
}
int main()
{
    int n,m;
    read_input(&n, &m);
     printf("the result is :%d\n", power_of_m(n, m));
    return 0;

}