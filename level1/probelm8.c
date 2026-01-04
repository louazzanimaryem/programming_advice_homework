#include <stdio.h>

int     readmark(void)
{
    int marks;
    printf("entre your marks :\n");
    scanf("%d", &marks);
    return marks;
}
int main()
{
    int num = readmark();
    if(num >= 50)
    {
        printf("PASS\n");
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}