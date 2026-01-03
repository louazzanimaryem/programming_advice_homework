#include <stdio.h>
// check odd or even
const char    *even_or_odd(int n)
{
    if (n % 2 == 0)
    {
        return "even";
    }
    else 
    {
        return  "odd";
    }
}
int main ()
{
    
    printf("%s \n", even_or_odd(8));
}