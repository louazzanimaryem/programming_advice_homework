 #include <stdio.h>
 #include <math.h>
 void      read_input(float *n)
 {
    printf("entre a number :\n");
    scanf("%f", n);
 }
 int    my_ceil(float x)
 {
    int int_part = (int)x;
    float as_int = (float)int_part;
    if(as_int == x)
    {
        return int_part;
    }
    if(x > 0)
    {
        return int_part + 1;
    }
    else
    {
        return int_part;
    }
 }
 int main()
 {
    float n;
    read_input(&n);
    printf("result :%d\n", my_ceil(n));
 }