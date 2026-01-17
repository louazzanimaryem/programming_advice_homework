#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char rand_char()
{
    return 'A' + rand() % 26;
}
void    print_key(int index)
{
    int i;
    printf("key [%d]: ", index);
    i = 1;
    while (i <= 16)
    {
        printf("%c", rand_char());
        if(i % 4 == 0 && i != 16)
        {
            printf("-");
        }
        i++;
    }
    printf("\n");
}
int main()
{
    int n, i;
    srand(time(NULL));
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        print_key(i);
        i++;
    }
    return 0;
}