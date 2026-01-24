 #include <stdio.h>
 #include <math.h>
 void   read_input(int *n)
 {
    printf("entre a number\n");
    scanf("%d", n);
 }

double  my_sqrt(int x)
 {
    if(x < 0)
    {
        return -1;
    }
     if(x == 0|| x == 1)
     {
        return x;
     }
     double guess = x / 2.0;
     double prev = 0.0;
     while (fabs(guess-prev) > 0.000001)
     {
        prev = guess;
        guess = (prev + x / prev) / 2.0;
     }
      return guess;
 }
 int main()
 {
    int n;
    read_input(&n);
    printf("the result %.2f\n", my_sqrt(n));
    printf("sqrt result :%.2f\n", sqrt(n));
    return 0;
 }