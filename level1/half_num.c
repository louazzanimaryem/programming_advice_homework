#include <stdio.h>
float clac(int num)
{
    return num / 2;
}
int main()
{
    int num;
  // float half_num;
    printf("entre your num :");
    scanf("%d", &num);
    //half_num = num / 2;
    printf("%f\n",clac(num));
}