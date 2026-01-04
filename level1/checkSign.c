#include <stdio.h>
int readnumber(void)
{
    int n;
    scanf("%d", &n);
    return n;
}
const char *checksign(int n)
{
    if(n > 0)
    {
        return "POsitive";
    }
    else if(n < 0)
    {
        return "NEGATIVE";
    }
    else if (n == 0) 
    {
        return "zero";
    }
}
int main()
{
    int n = readnumber();
    const char *res = checksign(n);
    printf("%s\n", res);
    return 0;
}